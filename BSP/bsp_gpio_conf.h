/*
 * @Author: Terry Zhang
 * @Date: 2022-11-08 21:45
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-11-12 22:42
 * @File: bsp_gpio_conf.h
 * @Version: V1.0.0
 * @Brief: This file provides all functions about the XXX.
 * @Attention: 此文件依赖与ST官方库 V3.5
 * 本驱动通过函数 XX 进行使用
 * 使用前需调用 函数 XX 进行初始化
 * 注: 本文件需要和 XX 共同调用
 * Copyright © 2022 Ningbo Chuangke Electronic Information Co., Ltd. All Rights Reserved.
 */
#ifndef __BSP_GPIO_CONF_H
#define __BSP_GPIO_CONF_H

#include "stm32f10x.h"

#define LED0_GPIO_PIN GPIO_Pin_0
#define LED0_GPIO_PORT GPIOA
#define LED0_GPIO_RCC_Enable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOA, ENABLE)
#define LED0_GPIO_RCC_Disable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOA, DISABLE)

#define LED1_GPIO_PIN GPIO_Pin_1
#define LED1_GPIO_PORT GPIOB
#define LED1_GPIO_RCC_Enable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOB, ENABLE)
#define LED1_GPIO_RCC_Disable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOB, DISABLE)

#define LED2_GPIO_PIN GPIO_Pin_2
#define LED2_GPIO_PORT GPIOC
#define LED2_GPIO_RCC_Enable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOC, ENABLE)
#define LED2_GPIO_RCC_Disbale() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOC, DISABLE)

#define LED3_GPIO_PIN GPIO_Pin_3
#define LED3_GPIO_PORT GPIOD
#define LED3_GPIO_RCC_Enable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOD, ENABLE)
#define LED3_GPIO_RCC_Disable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOD, DISABLE)

#define UART1_TX_PIN GPIO_Pin_4
#define UART1_TX_PORT GPIOE
#define UART1_TX_RCC_Enable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOE, ENABLE)
#define UART1_TX_RCC_Disable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOE, DISABLE)

#define UART1_RX_PIN GPIO_Pin_5
#define UART1_RX_PORT GPIOF
#define UART1_RX_RCC_Enable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOF, ENABLE)
#define UART1_RX_RCC_Disable() RCC_APB2PeriphResetCmd(RCC_APB2Periph_GPIOF, DISABLE)

#endif
