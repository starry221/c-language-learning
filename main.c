#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "light.h"
#include "key.h"

uint8_t keyNum;

int main(void)
{
	led_Init();
	key_Init();


	while(1)
{	
	keyNum=keyGetNum();
	if(keyNum==1)
	{
		led1_turn();
	}
	if(keyNum==2)
	{
		led2_turn();
	
	}
	
}	
	
		
	
	
	

}




