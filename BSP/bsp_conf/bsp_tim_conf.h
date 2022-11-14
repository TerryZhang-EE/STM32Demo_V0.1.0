/*
 * @Author: Terry Zhang
 * @Date: 2022-11-08 21:45
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-11-12 22:34
 * @File: bsp_tim_conf.h
 * @Version: V1.0.0
 * @Brief: This file provides all functions about the XXX.
 * @Attention: 此文件依赖与ST官方库 V3.5
 * 本驱动通过函数 XX 进行使用
 * 使用前需调用 函数 XX 进行初始化
 * 注: 本文件需要和 XX 共同调用
 * Copyright © 2022 Ningbo Chuangke Electronic Information Co., Ltd. All Rights Reserved.
 */
#ifndef __BSP_TIM_CONF_H
#define __BSP_TIM_CONF_H

#include "stm32f10x.h"

#define SYS_TIM TIM6
#define SYS_TIM_RCC_Enable() RCC_APB1PeriphResetCmd(RCC_APB1Periph_TIM6, ENABLE);
#define SYS_TIM_RCC_Disable() RCC_APB1PeriphResetCmd(RCC_APB1Periph_TIM6, DISABLE);
#define SYS_TIM_IRQHandler(void) TIM6_IRQHandler(void)

// void RCC_APB2PeriphResetCmd(uint32_t RCC_APB2Periph, FunctionalState NewState);
// void RCC_APB1PeriphResetCmd(uint32_t RCC_APB1Periph, FunctionalState NewState);

#endif
