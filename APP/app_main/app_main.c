/*
 * @Author: Terry Zhang
 * @Date: 2022-10-29 23:50
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-10-29 23:52
 * @File: app_main.c
 * @Version: V1.0.0
 * @Brief: This file provides all functions about the XXX.
 * @Attention: 此文件依赖与ST官方库 V3.5
 * 本驱动通过函数 XX 进行使用
 * 使用前需调用 函数 XX 进行初始化
 * 注: 本文件需要和 XX 共同调用
 * Copyright © 2022 Ashmar Scientific (SHANGHAI) Ltd. All Rights Reserved.
 */
#include "stm32f10x.h"

void Delay(u32 count)
{
    u32 i = 0;
    for (; i < count; i++)
        ;
}
int main(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOD, ENABLE);
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;         // LED0---->PA.8 ????
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;  //????
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; // IO???? 50MHz GPIO_Init(GPIOA, &GPIO_InitStructure); //????????? GPIOA.8 GPIO_SetBits(GPIOA,GPIO_Pin_8); //PA.8 ???
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;         // LED1---->PD.2 ???? , ????
    GPIO_Init(GPIOD, &GPIO_InitStructure);            //???? IO???? 50MHz GPIO_SetBits(GPIOD,GPIO_Pin_2); //PD.2 ???
    while (1)
    {
        GPIO_ResetBits(GPIOA, GPIO_Pin_8);
        GPIO_SetBits(GPIOD, GPIO_Pin_2);
        Delay(3000000);
        GPIO_SetBits(GPIOA, GPIO_Pin_8);
        GPIO_ResetBits(GPIOD, GPIO_Pin_2);
        Delay(3000000);
    }
}
