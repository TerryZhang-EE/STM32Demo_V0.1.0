/*
 * @Author: Terry Zhang
 * @Date: 2022-11-08 21:46
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-11-16 02:27
 * @File: bsp_led.c
 * @Version: V1.0.0
 * @Brief: This file provides all functions about the XXX.
 * @Attention: 此文件依赖与ST官方库 V3.5
 * 本驱动通过函数 XX 进行使用
 * 使用前需调用 函数 XX 进行初始化
 * 注: 本文件需要和 XX 共同调用
 * Copyright © 2022 Ningbo Chuangke Electronic Information Co., Ltd. All Rights Reserved.
 */
#include "bsp_led.h"

LED_Conf LED_Array[LED_SUM];

void BSP_LED_GPIO_Init(LED_Conf *LED_Struct)
{
    GPIO_InitTypeDef *GPIO_InitStruct;

    GPIO_InitStruct->GPIO_Pin = LED_Struct->GPIO_Pinx;
    GPIO_InitStruct->GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStruct->GPIO_Mode = GPIO_Mode_Out_PP;

    GPIO_Init(LED_Struct->GPIOx, GPIO_InitStruct);
}

void BSP_LED_Init(void)
{
    LED0.GPIO_Pinx = LED0_GPIO_PIN;
    LED0.GPIOx = LED0_GPIO_PORT;

    LED1.GPIO_Pinx = LED1_GPIO_PIN;
    LED1.GPIOx = LED1_GPIO_PORT;

    LED2.GPIO_Pinx = LED2_GPIO_PIN;
    LED2.GPIOx = LED2_GPIO_PORT;

    LED3.GPIO_Pinx = LED3_GPIO_PIN;
    LED3.GPIOx = LED3_GPIO_PORT;

    LED0_GPIO_RCC_Enable();
    LED1_GPIO_RCC_Enable();
    LED2_GPIO_RCC_Enable();
    LED3_GPIO_RCC_Enable();

    for (uint8_t i = 0; i < LED_SUM; i++)
    {
        BSP_LED_GPIO_Init(&LED_Array[i]);
    }
}

void BSP_LED_Enable(LED_Conf *LED_Struct)
{
    LED_Struct->Flag_Enable = SET;
    GPIO_WriteBit(LED_Struct->GPIOx, LED_Struct->GPIO_Pinx, Bit_SET);
}

void BSP_LED_Disable(LED_Conf *LED_Struct)
{
    LED_Struct->Flag_Enable = RESET;
    GPIO_WriteBit(LED_Struct->GPIOx, LED_Struct->GPIO_Pinx, Bit_RESET);
}

void BSP_LED_Conf(LED_Conf *LED_Struct, uint8_t CMD, uint16_t Data)
{
    if (LED_Struct->CMD == CMD_LED_IDLE)
    {
        LED_Struct->CMD = CMD;
        LED_Struct->Data = Data;

        switch (LED_Struct->CMD)
        {
        case CMD_LED_ENABLE:
            BSP_LED_Enable(LED_Struct);
            break;

        case CMD_LED_DISABLE:
            BSP_LED_Disable(LED_Struct);
            break;

        default:
            break;
        }
    }
}
