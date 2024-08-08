/*
 * ROSPi Env App
 * Josh Grimes
 * Summer 2024
 */

#include <stdio.h>
#include <string.h>
#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/drivers/led_strip.h>
#include <zephyr/drivers/spi.h>
#include <zephyr/drivers/can.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/sys/byteorder.h>
#include <zephyr/sys/util.h>

// Pieces necessary to work with the LED strip
#define RGB(_r, _g, _b) {.r = (_r), .g = (_g), .b = (_b)}

int numLEDs = 0;
struct led_rgb color1[1] = {RGB(0x00,0x00,0x00)};
struct led_rgb color2[1] = {RGB(0x00,0x00,0x00)};
struct led_rgb blank[1] = {RGB(0x00,0x00,0x00)};

// An array of led_rgb corresponding to each physical "pixel" present, i.e. an array of color values for each individual rgb led/"pixel"
static struct led_rgb* pixels;

// Gets the led strip from the devicetree
const struct device *const strip = DEVICE_DT_GET_ANY(worldsemi_ws2812_spi);

// Gets the bme680 from the devicetree
const struct device *const bme680 = DEVICE_DT_GET_ANY(bosch_bme680);

// Gets the opt3001 from the devicetree
const struct device *const opt3001 = DEVICE_DT_GET_ANY(ti_opt3001);

// Gets the tcan332g from the devicetree
const struct device *const tcan332g = DEVICE_DT_GET_ANY(st_stm32_fdcan);

// Gets address 0 from the harness
static const struct gpio_dt_spec address0 = GPIO_DT_SPEC_GET(DT_ALIAS(add0), gpios);

// Gets address 1 from the harness
static const struct gpio_dt_spec address1 = GPIO_DT_SPEC_GET(DT_ALIAS(add1), gpios);

// Gets address 2 from the harness
static const struct gpio_dt_spec address2 = GPIO_DT_SPEC_GET(DT_ALIAS(add2), gpios);

// Setting up the transmit CAN frame
struct can_frame tx_frame = {
	.dlc = 11,
	.flags = CAN_FRAME_FDF | CAN_FRAME_IDE | (!CAN_FRAME_BRS)
};
struct can_frame rx_frame;

// a union to be able to access the bits of floating point numbers we get from the sensors
union floatbits {
	float f;
	uint8_t i[4];
};

// structs and floats to hold sensor values
struct sensor_value temperature, press, humidity, gasres, light;
float tempval, pressval, humidityval, gasresval, lightval;

// Setting up timers and work queues
struct k_timer sendtimer;
struct k_timer flashhightimer1;
struct k_timer flashlowtimer1;
struct k_timer flashhightimer2;
struct k_timer flashlowtimer2;
K_THREAD_STACK_DEFINE(my_stack_area,2048);
struct k_work_q workqueue;
struct k_work mysendwork;
struct k_work myreceivework;
struct k_work myflashwork;
struct k_work myflashwork2;

// Setting up vars to use with the flashes
bool flashcall1;
bool flashcall2;
bool flashhalf = false;
int hightimeinput1;
int lowtimeinput1;
int realhightime1;
int hightimeinput2;
int lowtimeinput2;
int realhightime2;

// Function declarations
void sendfunction(struct k_timer *timer_id);
void my_send_work_handler(struct k_work *work);
void rx_callback_function(const struct device *dev, struct can_frame *frame, void *user_data);
void my_receive_work_handler(struct k_work *work);
void my_flash_work_handler(struct k_work *work);
void flashhighfunction1(struct k_timer *timer_id);
void flashlowfunction1(struct k_timer *timer_id);
void flashhighfunction2(struct k_timer *timer_id);
void flashlowfunction2(struct k_timer *timer_id);
void my_flash_work_handler2(struct k_work *work);

int temp; // used for error checking
int main(void)
{
	// Ensuring all devices are ready
	if(!device_is_ready(bme680))
	{
		printf("bme680 is NOT ready");
		return 0;
	}
	if(!device_is_ready(opt3001))
	{
		printf("opt3001 is NOT ready");
		return 0;
	}
	if(!device_is_ready(strip))
	{
		printf("led strip is NOT ready");
		return 0;
	}
	if(!device_is_ready(tcan332g))
	{
		printf("CAN transceiver is NOT ready");
		return 0;
	}
	else
	{
		temp = can_set_mode(tcan332g, CAN_MODE_FD);
		if(temp != 0)
		{
			printf("Error setting CAN mode");
			return 0;
		}

		temp = can_start(tcan332g);
		if(temp != 0)
		{
			printf("Error starting CAN");
			return 0;
		}
	}
	if (!gpio_is_ready_dt(&address0)) {
		printf("Address 0 GPIO is not ready.");
		return 0;
	}
	if (!gpio_is_ready_dt(&address1)) {
		printf("Address 1 GPIO is not ready.");
		return 0;
	}
	if (!gpio_is_ready_dt(&address2)) {
		printf("Address 2 GPIO is not ready.");
		return 0;
	}
	temp = gpio_pin_configure_dt(&address0, GPIO_INPUT);
	if (temp < 0) {
		printf("Address 0 pin configuration failed.");
		return 0;
	}
	temp = gpio_pin_configure_dt(&address1, GPIO_INPUT);
	if (temp < 0) {
		printf("Address 1 pin configuration failed.");
		return 0;
	}
	temp = gpio_pin_configure_dt(&address2, GPIO_INPUT);
	if (temp < 0) {
		printf("Address 2 pin configuration failed.");
		return 0;
	}
	
	// getting the address values from the harness and handling them
	uint32_t add0val = gpio_pin_get_dt(&address0);
	uint32_t add1val = gpio_pin_get_dt(&address1);
	uint32_t add2val = gpio_pin_get_dt(&address2);

	uint32_t devID = 0xA0 | add2val << 2 | add1val << 1 | add0val; // should be somewhere between A0-A7
	uint32_t rxID = devID << 8; // "destination" part of 29 bit ID when RECEIVING
	uint32_t txID = devID; // "source" part of 29 bit ID when SENDING

	tx_frame.id = (0x00000000 | txID);
	
	// creating the filter for receiving messages
	const struct can_filter rx_filter = {
	.id = (0x00000000 | rxID),
	.flags = CAN_FILTER_IDE,
	.mask = 0x0000FF00
	};
	
	// preparing the interrupt on each CAN receive
	temp = can_add_rx_filter(tcan332g, rx_callback_function, NULL, &rx_filter);
	if (temp < 0) {
		printf("Unable to attach to ISR.");
		return 0;
	}

	// initializing the work queue
	k_work_queue_init(&workqueue);
	k_work_queue_start(&workqueue, my_stack_area, K_THREAD_STACK_SIZEOF(my_stack_area), 2, NULL);

	// initializing the work itself
	k_work_init(&mysendwork, my_send_work_handler);
	k_work_init(&myreceivework, my_receive_work_handler);
	k_work_init(&myflashwork, my_flash_work_handler);
	k_work_init(&myflashwork2, my_flash_work_handler2);

	// initializing and starting the timer for the send function
	k_timer_init(&sendtimer, sendfunction, NULL);
	k_timer_start(&sendtimer, K_SECONDS(1), K_SECONDS(1)); // the send timer triggers every 5 seconds

	// initializing the timers for flashing the LEDs
	k_timer_init(&flashhightimer1, flashhighfunction1, NULL);
	k_timer_init(&flashlowtimer1, flashlowfunction1, NULL);
	k_timer_init(&flashhightimer2, flashhighfunction2, NULL);
	k_timer_init(&flashlowtimer2, flashlowfunction2, NULL);

	return 0;
}


//
// Function definitions
//

// Called immediately after every CAN receive, runs in an interrupt context
void rx_callback_function(const struct device *dev, struct can_frame *frame, void *user_data)
{
	rx_frame = *frame;
	k_work_submit(&myreceivework);
}

// Called after the send timer expires each time, runs in an interrupt context
void sendfunction(struct k_timer *timer_id)
{
	k_work_submit(&mysendwork);
}

// Called after the flash high timer 1 expires each time, runs in an interrupt context
void flashhighfunction1(struct k_timer *timer_id)
{
	flashcall1 = true;
	k_work_submit(&myflashwork);
	k_timer_start(&flashlowtimer1, K_MSEC(hightimeinput1), K_MSEC(hightimeinput1));
}

// Called after the flash low timer 1 expires each time, runs in an interrupt context
void flashlowfunction1(struct k_timer *timer_id)
{
	flashcall1 = false;
	k_work_submit(&myflashwork);
	k_timer_stop(&flashlowtimer1);
}

// Called after the flash high timer 2 expires each time, runs in an interrupt context
void flashhighfunction2(struct k_timer *timer_id)
{
	flashcall2 = true;
	k_work_submit(&myflashwork2);
	k_timer_start(&flashlowtimer2, K_MSEC(hightimeinput2), K_MSEC(hightimeinput2));
}

// Called after the flash low timer 2 expires each time, runs in an interrupt context
void flashlowfunction2(struct k_timer *timer_id)
{
	flashcall2 = false;
	k_work_submit(&myflashwork2);
	k_timer_stop(&flashlowtimer2);
}

// Handles the work for every receive, this work is submited by the rx_callback_function
void my_receive_work_handler(struct k_work *work)
{
	// SET LED COUNT
	// CAN data looks like:
	// 0-index byte: 0x00
	// 1-index byte: (top byte of 16-bit integer to represent # of LEDs)
	// 2-index byte: (bottom byte of 16-bit integer to represent # of LEDs)
	if(rx_frame.data[0] == 0x00)
	{
		numLEDs = (uint8_t)rx_frame.data[2] | (uint8_t)rx_frame.data[1] << 8;

		pixels = calloc(sizeof(struct led_rgb) * numLEDs, sizeof(uint8_t));
		printf("Set number of LEDs to %d\n", numLEDs);
	}
	// SET LED EFFECT
	// CAN data looks like:
	// 0-index byte: 0x01
	// (rest explained below)
	if(rx_frame.data[0] == 0x01)
	{
		// initial check to ensure SET LED COUNT has been done
		if(numLEDs == 0)
		{
			printf("number of LEDs is not yet specified\n");
			return;
		}
		// Clears the strip
		k_timer_stop(&flashhightimer1);
		k_timer_stop(&flashlowtimer1);
		k_timer_stop(&flashhightimer2);
		k_timer_stop(&flashlowtimer2);
		flashhalf = false;
		for(int j = 0; j < numLEDs; j++)
		{
			memcpy(&pixels[j], &blank[0], sizeof(struct led_rgb));
		}
		led_strip_update_rgb(strip, pixels, numLEDs);


		// SOLID
		// 1-index byte: 0x00
		// 2-index byte: (hex value for amount of red)
		// 3-index byte: (hex value for amount of green)
		// 4-index byte: (hex value for amount of blue)
		if(rx_frame.data[1] == 0x00)
		{
			color1[0].r = rx_frame.data[2];
			color1[0].g = rx_frame.data[3];
			color1[0].b = rx_frame.data[4];
			for(int i = 0; i < numLEDs; i++)
			{
				memcpy(&pixels[i], &color1[0], sizeof(struct led_rgb));
			}
			led_strip_update_rgb(strip, pixels, numLEDs);
		}
		// HALF
		// 1-index byte: 0x01
		// 2-index byte: (hex value for amount of red for first* half)
		// 3-index byte: (hex value for amount of green for first* half)
		// 4-index byte: (hex value for amount of blue for first* half)
		// 5-index byte: (hex value for amount of red for second* half)
		// 6-index byte: (hex value for amount of green for second* half)
		// 7-index byte: (hex value for amount of blue for second* half)
		// * First indicates the half closest to the connector, second indicates
		// the half farthest from the connector
		if(rx_frame.data[1] == 0x01)
		{
			color1[0].r = rx_frame.data[2];
			color1[0].g = rx_frame.data[3];
			color1[0].b = rx_frame.data[4];
			color2[0].r = rx_frame.data[5];
			color2[0].g = rx_frame.data[6];
			color2[0].b = rx_frame.data[7];

			int i;
			for(i = 0; i < (numLEDs / 2); i++)
			{
				memcpy(&pixels[i], &color1[0], sizeof(struct led_rgb));
			}
			for(i = (numLEDs / 2); i < numLEDs; i++)
			{
				memcpy(&pixels[i], &color2[0], sizeof(struct led_rgb));
			}
			led_strip_update_rgb(strip, pixels, numLEDs);
		}
		// FLASH SOLID
		// 1-index byte: 0x02
		// 2-index byte: (hex value for amount of red)
		// 3-index byte: (hex value for amount of green) 
		// 4-index byte: (hex value for amount of blue)
		// 5-index byte: (top byte representing HIGH time for flash)*
		// 6-index byte: (bottom byte representing HIGH time for flash)*
		// 7-index byte: (top byte representing LOW time for flash)*
		// 8-index byte: (bottom byte representing LOW time for flash)*
		// * These times are in milliseconds, i.e. a HIGH or LOW time value
		// of 0xFFFF represents 65535 ms or 65.535 seconds.
		if(rx_frame.data[1] == 0x02)
		{
			color1[0].r = rx_frame.data[2];
			color1[0].g = rx_frame.data[3];
			color1[0].b = rx_frame.data[4];

			hightimeinput1 = (uint8_t)rx_frame.data[6] | (uint8_t)rx_frame.data[5] << 8;
			lowtimeinput1 = (uint8_t)rx_frame.data[8] | (uint8_t)rx_frame.data[7] << 8;

			realhightime1 = hightimeinput1 + lowtimeinput1;

			k_timer_start(&flashhightimer1, K_NO_WAIT, K_MSEC(realhightime1));
		}
		// FLASH HALF
		// 1-index byte: 0x03
		// 2-index byte: (hex value for amount of red for first* half)
		// 3-index byte: (hex value for amount of green for first* half) 
		// 4-index byte: (hex value for amount of blue for first* half)
		// 5-index byte: (top byte representing HIGH time for flash for first* half)^
		// 6-index byte: (bottom byte representing HIGH time for flash for first* half)^
		// 7-index byte: (top byte representing LOW time for flash for first* half)^
		// 8-index byte: (bottom byte representing LOW time for flash for first* half)^
		// 9-index byte: (hex value for amount of red for second* half)
		// 10-index byte: (hex value for amount of green for second* half) 
		// 11-index byte: (hex value for amount of blue for second* half)
		// 12-index byte: (top byte representing HIGH time for flash for second* half)^
		// 13-index byte: (bottom byte representing HIGH time for flash for second* half)^
		// 14-index byte: (top byte representing LOW time for flash for second* half)^
		// 15-index byte: (bottom byte representing LOW time for flash for second* half)^
		// * First indicates the half closest to the connector, second indicates
		// the half farthest from the connector
		// ^ These times are in milliseconds, i.e. a HIGH or LOW time value
		// of 0xFFFF represents 65535 ms or 65.535 seconds.
		if(rx_frame.data[1] == 0x03)
		{
			flashhalf = true;
			color1[0].r = rx_frame.data[2];
			color1[0].g = rx_frame.data[3];
			color1[0].b = rx_frame.data[4];
			color2[0].r = rx_frame.data[9];
			color2[0].g = rx_frame.data[10];
			color2[0].b = rx_frame.data[11];

			hightimeinput1 = (uint8_t)rx_frame.data[6] | (uint8_t)rx_frame.data[5] << 8;
			lowtimeinput1 = (uint8_t)rx_frame.data[8] | (uint8_t)rx_frame.data[7] << 8;
			hightimeinput2 = (uint8_t)rx_frame.data[13] | (uint8_t)rx_frame.data[12] << 8;
			lowtimeinput2 = (uint8_t)rx_frame.data[15] | (uint8_t)rx_frame.data[14] << 8;

			realhightime1 = hightimeinput1 + lowtimeinput1;
			realhightime2 = hightimeinput2 + lowtimeinput2;

			k_timer_start(&flashhightimer1, K_NO_WAIT, K_MSEC(realhightime1));
			k_timer_start(&flashhightimer2, K_NO_WAIT, K_MSEC(realhightime2));
		}
	}

}

// Handles the work for every send, this work is submited by the sendfunction
void my_send_work_handler(struct k_work *work)
{
	// fetching sensor data into the sensor_value structs
	sensor_sample_fetch(bme680);
	sensor_channel_get(bme680, SENSOR_CHAN_AMBIENT_TEMP, &temperature);
	sensor_channel_get(bme680, SENSOR_CHAN_PRESS, &press);
	sensor_channel_get(bme680, SENSOR_CHAN_HUMIDITY, &humidity);
	sensor_channel_get(bme680, SENSOR_CHAN_GAS_RES, &gasres);
	sensor_sample_fetch(opt3001);
	sensor_channel_get(opt3001, SENSOR_CHAN_LIGHT, &light);

	// converting sensor_value structs to floats
	tempval = sensor_value_to_float(&temperature);
	pressval = sensor_value_to_float(&press);
	humidityval = sensor_value_to_float(&humidity);
	gasresval = sensor_value_to_float(&gasres);
	lightval = sensor_value_to_float(&light);

	// putting floats into unions to convert to 4 bytes of binary data
	union floatbits tempu, pressu, humidityu, gasresu, lightu;
	tempu.f = tempval;
	pressu.f = pressval;
	humidityu.f = humidityval;
	gasresu.f = gasresval;
	lightu.f = lightval;

	// Loading in the data for the CAN transmit frame using the unions
	// 0-3 temperature in degrees C
	// 4-7 pressure in kPa
	// 8-11 humidity in %
	// 12-15 gas resistance in Ohms
	// 16-19 light in lux
	tx_frame.data[0] = (tempu.i)[3];
	tx_frame.data[1] = (tempu.i)[2];
	tx_frame.data[2] = (tempu.i)[1];
	tx_frame.data[3] = (tempu.i)[0];
	tx_frame.data[4] = (pressu.i)[3];
	tx_frame.data[5] = (pressu.i)[2];
	tx_frame.data[6] = (pressu.i)[1];
	tx_frame.data[7] = (pressu.i)[0];
	tx_frame.data[8] = (humidityu.i)[3];
	tx_frame.data[9] = (humidityu.i)[2];
	tx_frame.data[10] = (humidityu.i)[1];
	tx_frame.data[11] = (humidityu.i)[0];
	tx_frame.data[12] = (gasresu.i)[3];
	tx_frame.data[13] = (gasresu.i)[2];
	tx_frame.data[14] = (gasresu.i)[1];
	tx_frame.data[15] = (gasresu.i)[0];
	tx_frame.data[16] = (lightu.i)[3];
	tx_frame.data[17] = (lightu.i)[2];
	tx_frame.data[18] = (lightu.i)[1];
	tx_frame.data[19] = (lightu.i)[0];

	// sends the can frame to the pi
	can_send(tcan332g, &tx_frame, K_FOREVER, NULL, NULL);
}

// Handles solid flashing and flashing the first half in the case of a half flash
void my_flash_work_handler(struct k_work *work)
{
	// if flash solid
	if(!flashhalf)
	{
		// if the call was to high
		if(flashcall1)
		{
			for(int i = 0; i < numLEDs; i++)
			{
				memcpy(&pixels[i], &color1[0], sizeof(struct led_rgb));
			}
			led_strip_update_rgb(strip, pixels, numLEDs);
		}
		// if the call was to low
		else
		{
			for(int j = 0; j < numLEDs; j++)
			{
				memcpy(&pixels[j], &blank[0], sizeof(struct led_rgb));
			}
			led_strip_update_rgb(strip, pixels, numLEDs);
		}
	}
	// if flash half
	else
	{
		int i;
		// if the call was to high
		if(flashcall1)
		{
			for(i = 0; i < (numLEDs / 2); i++)
			{
				memcpy(&pixels[i], &color1[0], sizeof(struct led_rgb));
			}
			led_strip_update_rgb(strip, pixels, numLEDs);
		}
		// if the call was to low
		else
		{
			for(i = 0; i < (numLEDs / 2); i++)
			{
				memcpy(&pixels[i], &blank[0], sizeof(struct led_rgb));
			}
			
			led_strip_update_rgb(strip, pixels, numLEDs);
		}
	}
}

// handles flashing the second half in the case of a half flash
void my_flash_work_handler2(struct k_work *work)
{
	int i;
	// if the call was to high
	if(flashcall2)
	{
		for(i = (numLEDs / 2); i < numLEDs; i++)
		{
			memcpy(&pixels[i], &color2[0], sizeof(struct led_rgb));
		}
		led_strip_update_rgb(strip, pixels, numLEDs);
	}
	// if the call was to low
	else
	{
		for(i = (numLEDs / 2); i < numLEDs; i++)
		{
			memcpy(&pixels[i], &blank[0], sizeof(struct led_rgb));
		}
		led_strip_update_rgb(strip, pixels, numLEDs);
	}
}