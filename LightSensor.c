#include "stm32f10x.h"                  // Device header


void LightSensor_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_Instructure;
	GPIO_Instructure.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_Instructure.GPIO_Pin=GPIO_Pin_10;
	GPIO_Instructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Instructure);
	
}	

uint8_t LightSensor_Read(void)
{
	return GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_10);

}








