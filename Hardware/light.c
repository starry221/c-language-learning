#include "stm32f10x.h"                  // Device header
void led_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_Instructure;
	GPIO_Instructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_Instructure.GPIO_Pin=GPIO_Pin_0|GPIO_Pin_1;
	GPIO_Instructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Instructure);
	GPIO_SetBits(GPIOA,GPIO_Pin_0|GPIO_Pin_1);
}

void led1_turn(void)
{
	if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_0)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_0);
	
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_0);
	
	}	
	
	
}

void led2_turn(void)
{
	if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_1)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_1);
	
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_1);
	
	}	
	
	
}
