#ifndef __LightSensor_h
#define __LightSensor_h
#include "stm32f10x.h"                  // Device header

//初始化光敏传感器
void LightSensor_Init(void);
//读取光敏传感器
uint8_t LightSensor_Read(void);


#endif
