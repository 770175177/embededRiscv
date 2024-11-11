/*
 * (C) Copyright 2018
* SPDX-License-Identifier:	GPL-2.0+
 * wangwei <wangwei@allwinnertech.com>
 */

#include <common.h>
#include <private_boot0.h>
#include <private_uboot.h>
// #include <private_toc.h>
#include <arch/clock.h>
#include <arch/uart.h>
// #include <arch/dram.h>
// #include <arch/rtc.h>
#include <arch/gpio.h>

static void print_commit_log(void)
{
	printf("HELLO deel! BOOT0 is starting!\n");
	printf("BOOT0 commit : %s\n", BT0_head.hash);
}

void main(void)
{
	int dram_size;
	int status;
	phys_addr_t  uboot_base = 0, optee_base = 0, monitor_base = 0, \
				rtos_base = 0, opensbi_base = 0;
	u16 pmu_type = 0, key_input = 0; /* TODO: set real value */

	sunxi_serial_init(BT0_head.prvt_head.uart_port, (void *)BT0_head.prvt_head.uart_ctrl, 6);
	print_commit_log();

	while(1);
}
