/*
 * STM32F4DISCO BME280 Testing
 * Josh Grimes
 * Summer 2024
 */

#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/drivers/spi.h>

void fetch_and_display(const struct device *bme)
{
	struct sensor_value temp, press, humidity;

	sensor_sample_fetch(bme);
	sensor_channel_get(bme, SENSOR_CHAN_AMBIENT_TEMP, &temp);
	sensor_channel_get(bme, SENSOR_CHAN_PRESS, &press);
	sensor_channel_get(bme, SENSOR_CHAN_HUMIDITY, &humidity);

	printf("temperature: %f degrees C\npressure: %f hPa\nhumidity: %f%%\n\n", sensor_value_to_double(&temp), sensor_value_to_double(&press), sensor_value_to_double(&humidity));
}


int main(void)
{
	
	const struct device *const bme = DEVICE_DT_GET_ANY(bosch_bme280);

	if (bme == NULL) 
	{
		printf("No device found\n");
		return 0;
	}
	if (!device_is_ready(bme)) 
	{
		printf("Device %s is NOT ready\n", bme->name);
		return 0;
	}
	else
	{
		printf("Device %s IS ready\n", bme->name);
	}
	
	
	while(1)
	{
		fetch_and_display(bme);

		k_msleep(1000);
	}
	

	return 0;
}
