/*
 * ROSPi Env Testing
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
#include <zephyr/sys/byteorder.h>
#include <zephyr/sys/util.h>

// ?? Don't really know what this does exaclty and how it relates to the below struct ??
#define RGB(_r, _g, _b) { .r = (_r), .g = (_g), .b = (_b) }

// A generic array of led_rgb to show red, green, and blue, i.e. an array of color values
static const struct led_rgb colors[] = {
	RGB(0x0f, 0x00, 0x00), // red 
	RGB(0x00, 0x0f, 0x00), // green
	RGB(0x00, 0x00, 0x0f) // blue 
};

// An array of led_rgb corresponding to each physical "pixel" present, i.e. an array of color values for each individual rgb led/"pixel"
static struct led_rgb pixels[8];

// Gets the led strip from the devicetree
const struct device *const strip = DEVICE_DT_GET_ANY(worldsemi_ws2812_spi);

// Gets the bme680 from the devicetree
const struct device *const bme680 = DEVICE_DT_GET_ANY(bosch_bme680);

// Gets the opt3001 from the devicetree
const struct device *const opt3001 = DEVICE_DT_GET_ANY(ti_opt3001);

// Gets the tcan332g from the devicetree
const struct device *const tcan332g = DEVICE_DT_GET_ANY(st_stm32_fdcan);

// Defines a k_msgq struct to be used with CAN receiving
CAN_MSGQ_DEFINE(my_can_msgq, 2);

// Union for float bit access testing
union floatbits {
	float f;
	uint32_t ithirtytwo;
	uint8_t ieight[4];
};

int main(void)
{
	int temp;

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
	// Initializing CAN
	if(!device_is_ready(tcan332g))
	{
		printf("CAN transceiver is NOT ready");
		return 0;
	}
	else
	{
		printf("CAN transceiver IS ready\n");

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

	// Float testing
	union floatbits union1;
	union1.f = 1.234567;
	printf("float as hex: %X\n", union1.ithirtytwo);
	printf("first byte of float as hex using uint8_t array: %X\n", (union1.ieight)[3]);


	// Sending CAN
	struct can_frame tx_frame = {
        .id = 0x1fffffff,
        .dlc = 9, // value of 8 gives 8 bytes, 9 gives 12, 10 gives 16, etc.
        .data = {(union1.ieight)[3],(union1.ieight)[2],(union1.ieight)[1],(union1.ieight)[0],5,6,7,8,9,10,11,12},
		.flags = CAN_FRAME_FDF | CAN_FRAME_IDE // FD mode and extended 29 bit ID
	};
	for(int i = 0; i < 5; i++)
	{
		temp = can_send(tcan332g, &tx_frame, K_FOREVER, NULL, NULL);
	
		if (temp != 0) 
		{
			printf("Sending failed.\n");
		}
		else
		{
			printf("Sending succeeded.\n");
		}
	}

	// Receiving CAN
	const struct can_filter my_filter = {
        .id = 0x111,
		.mask = CAN_STD_ID_MASK
	};
	struct can_frame rx_frame;

	temp = can_add_rx_filter_msgq(tcan332g, &my_can_msgq, &my_filter);
	if (temp == -ENOSPC) {
		printf("Unable to attach msgq.\n");
	}

	temp = 1;
	while(temp != 0)
	{
		temp = k_msgq_get(&my_can_msgq, &rx_frame, K_NO_WAIT);
		if(temp == 0)
		{
			printf("Message received!\n");
		}
	}

	// LED strip cycling
	size_t color = 0;
	size_t numpixels = 8;

	for(int j = 0; j < 2; j++)
	{
		for(size_t cursor = 0; cursor < ARRAY_SIZE(pixels); cursor++)
		{
			memset(&pixels, 0x00, sizeof(pixels));
			memcpy(&pixels[cursor], &colors[color], sizeof(struct led_rgb));
			
			led_strip_update_rgb(strip, pixels, numpixels);

			k_msleep(500);
		}

		color = (color + 1) % ARRAY_SIZE(colors);
	}

	
	struct sensor_value bmetemp, bmepress, humidity, gasres;

	while(1)
	{
		sensor_sample_fetch(bme680);
		sensor_channel_get(bme680, SENSOR_CHAN_AMBIENT_TEMP, &bmetemp);
		sensor_channel_get(bme680, SENSOR_CHAN_PRESS, &bmepress);
		sensor_channel_get(bme680, SENSOR_CHAN_HUMIDITY, &humidity);
		sensor_channel_get(bme680, SENSOR_CHAN_GAS_RES, &gasres);


		printf("bme temp: %f degrees C\nbme pressure: %f Pa\nhumidity: %f %%RH\ngas resistance: %f Ohms\n   \n\n", sensor_value_to_double(&bmetemp), sensor_value_to_double(&bmepress), sensor_value_to_double(&humidity), sensor_value_to_double(&gasres));

		k_msleep(3000);
	}	
	

	return 0;
}
