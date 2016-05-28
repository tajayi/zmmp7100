/*
 * (C) Copyright 2013 Xilinx, Inc.
 * Modified by Tutu Ajayi for RISC-V Rocket Support
 *
 * u-boot Configuration settings for the Avnet Zynq MMP 7Z100
 * See zynq-common.h for Zynq common configs
 *
 * Adapted for RISC-V Rocket Support
 *
 * SPDX-License-Identifier: GPL-2.0+
 */

#ifndef __CONFIG_ZYNQ_ZMMP7100_H
#define __CONFIG_ZYNQ_ZMMP7100_H

#define CONFIG_SYS_SDRAM_SIZE   (256 * 1024 * 1024)

#define CONFIG_ZYNQ_SERIAL_UART1
#define CONFIG_ZYNQ_GEM0
#define CONFIG_ZYNQ_GEM_PHY_ADDR0 7

#define CONFIG_SYS_NO_FLASH

#define CONFIG_ZYNQ_SDHCI0
#define CONFIG_ZYNQ_USB
#define CONFIG_ZYNQ_QSPI
#define CONFIG_ZYNQ_I2C0
#define CONFIG_ZYNQ_EEPROM

#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_ZMMP7100_H */