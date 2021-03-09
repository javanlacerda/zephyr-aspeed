/*
 * SPDX-License-Identifier: Apache-2.0
 *
 * Copyright (c) 2021 ASPEED Technology Inc.
 */

#ifndef ZEPHYR_SOC_ARM_ASPEED_AST10X0_SOC_H_
#define ZEPHYR_SOC_ARM_ASPEED_AST10X0_SOC_H_

#include <sys/util.h>
#include <devicetree.h>

/* CMSIS required definitions */
#define __FPU_PRESENT  CONFIG_CPU_HAS_FPU
#define __MPU_PRESENT  CONFIG_CPU_HAS_ARM_MPU

/* non-cached (DMA) memory */
#define NON_CACHED_BSS	__attribute__((section(".nocache.bss")))
#define NON_CACHED_BSS_ALIGN16	__attribute__((aligned(16), section(".nocache.bss")))

#endif /* ZEPHYR_SOC_ARM_ASPEED_AST10X0_SOC_H_*/
