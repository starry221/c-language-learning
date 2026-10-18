#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "Buzzer.h"
#include "LightSensor.h"

int main(void)
{
	Buzzer_Init();
	LightSensor_Init();

	while(1)
	{
		if(LightSensor_Read()==1)
		{
			Delay_ms(20);
			Buzzer_OFF();
		}
		else
		{
			Delay_ms(20);
			Buzzer_ON();
		}
	}

}


