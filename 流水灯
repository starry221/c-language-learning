#include "stm32f10x.h"                  // Device header 
#include "Delay.h"
int  main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_Instructure;
	GPIO_Instructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_Instructure.GPIO_Pin=GPIO_Pin_All;
	GPIO_Instructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Instructure);
	while (1)
	{
	GPIO_Write(GPIOA,~0x0001);
	Delay_ms(500);
	GPIO_Write(GPIOA,~0x0002);
	Delay_ms(500);
	GPIO_Write(GPIOA,~0x0004);
	Delay_ms(500);
	GPIO_Write(GPIOA,~0x0008);
	Delay_ms(500);
	GPIO_Write(GPIOA,~0x0010);
	Delay_ms(500);
	}
/**GPIO_Write函数操纵端口所有引脚
  *0x000x为16进制数翻译成16位二进制数对应16个引脚，1输出高电平，0输出低电平
  *~为按位取反，位数不变并翻转所有位
  */



}

