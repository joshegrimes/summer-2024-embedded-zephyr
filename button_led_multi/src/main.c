/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/device.h>
#include <zephyr/sys/util.h>
#include <zephyr/sys/printk.h>
#include <inttypes.h>

/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1

/* The devicetree node identifier for the "led0" alias. */
#define LED0_NODE DT_ALIAS(led0)
#define LED1_NODE DT_ALIAS(led1)
#define LED2_NODE DT_ALIAS(led2)
#define LED3_NODE DT_ALIAS(led3)

#define SW0_NODE	DT_ALIAS(sw0)
#if !DT_NODE_HAS_STATUS(SW0_NODE, okay)
#error "Unsupported board: sw0 devicetree alias is not defined"
#endif

/*
 * A build error on this line means your board is unsupported.
 * See the sample documentation for information on how to fix this.
 */
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);

static const struct gpio_dt_spec button = GPIO_DT_SPEC_GET_OR(SW0_NODE, gpios, {0});

static const struct gpio_dt_spec led1 = GPIO_DT_SPEC_GET(LED1_NODE, gpios);

static const struct gpio_dt_spec led2 = GPIO_DT_SPEC_GET(LED2_NODE, gpios);

static const struct gpio_dt_spec led3 = GPIO_DT_SPEC_GET(LED3_NODE, gpios);

int main(void)
{
	int ret;

	if (!gpio_is_ready_dt(&led)) 
	{
		return 0;
	}

	if (!gpio_is_ready_dt(&led1)) 
	{
		return 0;
	}

	if (!gpio_is_ready_dt(&led2)) 
	{
		return 0;
	}

	if (!gpio_is_ready_dt(&led3)) 
	{
		return 0;
	}

	if (!gpio_is_ready_dt(&button)) 
	{
		printk("Error: button device %s is not ready\n",
		       button.port->name);
		return 0;
	}

	ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) 
	{
		return 0;
	}

	ret = gpio_pin_configure_dt(&led1, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) 
	{
		return 0;
	}

	ret = gpio_pin_configure_dt(&led2, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) 
	{
		return 0;
	}

	ret = gpio_pin_configure_dt(&led3, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) 
	{
		return 0;
	}

	ret = gpio_pin_configure_dt(&button, GPIO_INPUT);
	if (ret != 0) {
		printk("Error %d: failed to configure %s pin %d\n",
		       ret, button.port->name, button.pin);
		return 0;
	}

	while (1) 
	{
		int val = gpio_pin_get_dt(&button);

			if (val >= 0) 
			{
				gpio_pin_set_dt(&led, val);
				gpio_pin_set_dt(&led1, val);
				gpio_pin_set_dt(&led2, val);
				gpio_pin_set_dt(&led3, val);
			}
			k_msleep(SLEEP_TIME_MS);
	}
	return 0;
}
