/*
 * @Author: Terry Zhang
 * @Date: 2022-11-08 21:46
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-11-16 02:28
 * @File: bsp_led.h
 * @Version: V1.0.0
 * @Brief: This file provides all functions about the XXX.
 * @Attention: 此文件依赖与ST官方库 V3.5
 * 本驱动通过函数 XX 进行使用
 * 使用前需调用 函数 XX 进行初始化
 * 注: 本文件需要和 XX 共同调用
 * Copyright © 2022 Ningbo Chuangke Electronic Information Co., Ltd. All Rights Reserved.
 */
#ifndef __BSP_LED_H
#define __BSP_LED_H

#include "stm32f10x.h"
#include "bsp_conf/bsp_gpio_conf.h"

#define LED_SUM 4

#define BSP_LED0 LED_Array[0]
#define BSP_LED1 LED_Array[1]
#define BSP_LED2 LED_Array[2]
#define BSP_LED3 LED_Array[3]

#define CMD_LED_IDLE 0x00
#define CMD_LED_ENABLE 0x10
#define CMD_LED_DISABLE 0x20

typedef struct
{
    uint16_t GPIO_Pinx;
    GPIO_TypeDef *GPIOx;

    uint8_t CMD;
    uint16_t Data;

    FlagStatus Flag_Enable;

} LED_Conf;

extern LED_Conf LED_Array[LED_SUM];

void BSP_LED_GPIO_Init(LED_Conf *LED_Struct);
void BSP_LED_Init(void);
void BSP_LED_Enable(LED_Conf *LED_Struct);
void BSP_LED_Disable(LED_Conf *LED_Struct);
void BSP_LED_Conf(LED_Conf *LED_Struct, uint8_t CMD, uint16_t Data);

#endif