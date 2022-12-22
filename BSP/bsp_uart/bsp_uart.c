/*
 * @Author: Terry Zhang
 * @Date: 2022-11-20 16:43
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-11-20 17:53
 * @File: bsp_uart.c
 * @Version: V1.0.0
 * @Brief: This file provides all functions about the XXX.
 * @Attention: 此文件依赖与ST官方库 V3.5
 * 本驱动通过函数 XX 进行使用
 * 使用前需调用 函数 XX 进行初始化
 * 注: 本文件需要和 XX 共同调用
 * Copyright © 2022 Ningbo Chuangke Electronic Information Co., Ltd. All Rights Reserved. 
 */
#include "bsp_uart.h"

UART_Conf UART_Array[UART_SUM];

void BSP_UART_GPIO_Init(UART_Conf* UART_Struct)
{
    GPIO_InitTypeDef *GPIO_InitStruct;

    GPIO_InitStruct->GPIO_Pin = UART_Struct->Tx_Pin;
    GPIO_InitStruct->GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStruct->GPIO_Mode = GPIO_Mode_AF_PP;

    GPIO_Init(UART_Struct->Tx_GPIO, GPIO_InitStruct);

    GPIO_InitStruct->GPIO_Pin = UART_Struct->Rx_Pin;
    GPIO_InitStruct->GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStruct->GPIO_Mode = GPIO_Mode_IPU;

    GPIO_Init(UART_Struct->Rx_GPIO, GPIO_InitStruct);
}

void BSP_UART_Init(void)
{
    ;
}

void BSP_UART_Conf(void)
{
    ;
}
