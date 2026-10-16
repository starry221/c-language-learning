#include "stm32f10x.h"                  // Device header
#include "Delay.h"

void key_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	GPIO_InitTypeDef GPIO_Instructure;
	GPIO_Instructure.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_Instructure.GPIO_Pin=GPIO_Pin_6|GPIO_Pin_5;
	GPIO_Instructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_Instructure);
	GPIO_SetBits(GPIOB,GPIO_Pin_6|GPIO_Pin_5);
}


uint8_t keyGetNum(void)
{
	uint8_t keyNum=0;
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6)==0)
{	
	Delay_ms(20);
	while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6)==0);
	Delay_ms(20);
	keyNum=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_5)==0)
{	
	Delay_ms(20);
	while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_5)==0);
	Delay_ms(20);
	keyNum=2;
	}
	return keyNum;
}



