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

int main(void)
{
	int ret;

	if (!gpio_is_ready_dt(&led)) 
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
			}
			k_msleep(SLEEP_TIME_MS);
	}
	return 0;
}
