/*
 * @Author: Terry Zhang
 * @Date: 2022-11-09 17:22
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-11-09 18:28
 * @File: bsp_delay.c
 * @Version: V1.0.0
 * @Brief: This file provides all functions about the XXX.
 * @Attention: 此文件依赖与ST官方库 V3.5
 * 本驱动通过函数 XX 进行使用
 * 使用前需调用 函数 XX 进行初始化
 * 注: 本文件需要和 XX 共同调用
 * Copyright © 2022 Ningbo Chuangke Electronic Information Co., Ltd. All Rights Reserved.
 */
// #include "stm32f10x.h"
#include "bsp_delay.h"

static uint8_t fac_us = 0;  // us延时倍乘数
static uint16_t fac_ms = 0; // ms延时倍乘数

void delay_init(void)
{
    SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8); //选择外部时钟  HCLK/8
    fac_us = SystemCoreClock / 8000000;                   //为系统时钟的1/8
    fac_ms = (uint16_t)fac_us * 1000;                          //非OS下,代表每个ms需要的systick时钟数
}

//延时nus
// nus为要延时的us数.
void delay_us(u32 nus)
{
    u32 temp;
    SysTick->LOAD = nus * fac_us;             //时间加载
    SysTick->VAL = 0x00;                      //清空计数器
    SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk; //开始倒数
    do
    {
        temp = SysTick->CTRL;
    } while ((temp & 0x01) && !(temp & (1 << 16))); //等待时间到达
    SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;      //关闭计数器
    SysTick->VAL = 0X00;                            //清空计数器
}
//延时nms
//注意nms的范围
// SysTick->LOAD为24位寄存器,所以,最大延时为:
// nms<=0xffffff*8*1000/SYSCLK
// SYSCLK单位为Hz,nms单位为ms
//对72M条件下,nms<=1864
void delay_ms(uint16_t nms)
{
    u32 temp;
    SysTick->LOAD = (u32)nms * fac_ms;        //时间加载(SysTick->LOAD为24bit)
    SysTick->VAL = 0x00;                      //清空计数器
    SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk; //开始倒数
    do
    {
        temp = SysTick->CTRL;
    } while ((temp & 0x01) && !(temp & (1 << 16))); //等待时间到达
    SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;      //关闭计数器
    SysTick->VAL = 0X00;                            //清空计数器
}
