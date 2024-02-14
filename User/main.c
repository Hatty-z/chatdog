#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "Key.h"
#include "OLED.h"
#include "Servo.h"

uint16_t Num;
uint8_t i;

int main(void)
{
	LED_Init ();
	Key_Init ();
	OLED_Init();
	Servo_Init();
	
	while(1)
	{

	}
}
