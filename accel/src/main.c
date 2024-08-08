/*
 * STM32F4DISCO Accelerometer Testing
 * Josh Grimes
 * Summer 2024
 */

#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/drivers/spi.h>

/*
void fetch_and_display(const struct device *accel)
{
	struct sensor_value acceleration[3];
	int rc = sensor_sample_fetch(accel);
	rc = sensor_channel_get(accel, SENSOR_CHAN_ACCEL_XYZ, acceleration);
	printf("x %f, y %f, z %f", sensor_value_to_double(&acceleration[0]), sensor_value_to_double(&acceleration[1]), sensor_value_to_double(&acceleration[2]));
}
*/

int main(void)
{
	
	const struct device *const accel = DEVICE_DT_GET(DT_ALIAS(lis3dsh));

	if (accel == NULL) 
	{
		printf("No device found\n");
		return 0;
	}
	if (!device_is_ready(accel)) 
	{
		printf("Device %s is NOT ready\n", accel->name);
		return 0;
	}
	else
	{
		printf("Device %s IS ready\n", accel->name);
	}
	
	/*
	while(1)
	{
		fetch_and_display(accel);
	}
	*/

	return 0;
}
