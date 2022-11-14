/*
 * @Author: Terry Zhang
 * @Date: 2022-11-08 21:45
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-11-12 22:45
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
#define DEBUG_UART_RCC_Enable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_USART1, ENABLE)
#define DEBUG_UART_RCC_Disable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_USART1, DISABLE)
#define DEBUG_UART_IRQHandler(void) USART1_IRQHandler(void)



#endif
