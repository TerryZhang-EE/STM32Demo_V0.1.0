/*
 * @Author: Terry Zhang
 * @Date: 2022-11-09 17:22
 * @LastEditors: Terry Zhang
 * @LastEditTime: 2022-11-09 18:08
 * @File: bsp_delay.h
 * @Version: V1.0.0
 * @Brief: This file provides all functions about the XXX.
 * @Attention: 此文件依赖与ST官方库 V3.5
 * 本驱动通过函数 XX 进行使用
 * 使用前需调用 函数 XX 进行初始化
 * 注: 本文件需要和 XX 共同调用
 * Copyright © 2022 Ningbo Chuangke Electronic Information Co., Ltd. All Rights Reserved.
 */
#ifndef __DELAY_H
#define __DELAY_H

#include "bsp_sys/bsp_sys.h"

void delay_init(void);
void delay_ms(uint16_t nms);
void delay_us(u32 nus);

#endif
