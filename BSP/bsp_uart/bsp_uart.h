/*
 * @Author: Terry Zhang
 * @Date: 2022-11-20 16:43
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-11-20 17:52
 * @File: bsp_uart.h
 * @Version: V1.0.0
 * @Brief: This file provides all functions about the XXX.
 * @Attention: 此文件依赖与ST官方库 V3.5
 * 本驱动通过函数 XX 进行使用
 * 使用前需调用 函数 XX 进行初始化
 * 注: 本文件需要和 XX 共同调用
 * Copyright © 2022 Ningbo Chuangke Electronic Information Co., Ltd. All Rights Reserved.
 */
#ifndef __BSP_UART_H
#define __BSP_UART_H

#include "stm32f10x.h"
#include "bsp_conf/bsp_gpio_conf.h"

#define UART_SUM 1

#define BSP_UART0 UART_Array[0]
// #define BSP_UART1 UART_Arrar[1]

typedef struct
{
    uint16_t Tx_Pin;
    GPIO_TypeDef *Tx_GPIO;

    uint16_t Rx_Pin;
    GPIO_TypeDef *Rx_GPIO;

    uint8_t CMD;
    uint16_t Data;

    FlagStatus Flag_Enable;

} UART_Conf;

extern UART_Conf UART_Array[UART_SUM];

#endif
