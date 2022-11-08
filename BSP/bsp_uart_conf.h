/*
 * @Author: Terry Zhang
 * @Date: 2022-11-08 21:45
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-11-08 23:20
 * @File: bsp_uart_conf.h
 * @Version: V1.0.0
 * @Brief: This file provides all functions about the XXX.
 * @Attention: 此文件依赖与ST官方库 V3.5
 * 本驱动通过函数 XX 进行使用
 * 使用前需调用 函数 XX 进行初始化
 * 注: 本文件需要和 XX 共同调用
 * Copyright © 2022 Ningbo Chuangke Electronic Information Co., Ltd. All Rights Reserved. 
 */
#ifndef __BSP_UART_CONF_H
#define __BSP_UART_CONF_H

#include "stm32f10x.h"

#define DEBUG_UART UART4
#define DEBUG_UART_RCC_Enable()
#define DEBUG_UART_RCC_Disable()
#define DEBUG_UART_IRQHandler(void)



#endif
