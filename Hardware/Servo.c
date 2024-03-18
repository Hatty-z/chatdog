#include "stm32f10x.h"                  // Device header
#include "PWM.h"

void Servo_Init(void )
{
	PWM_Init ();
}

void Servo1_SetAngle(float Angle)
{
	TIM_SetCompare1 (TIM2 ,500+(2000*Angle/180));
}

void Servo2_SetAngle(float Angle)
{
	TIM_SetCompare2 (TIM2 ,500+(2000*Angle/180));
}

void Servo3_SetAngle(float Angle)
{
	TIM_SetCompare3 (TIM2 ,500+(2000*Angle/180));
}

void Servo4_SetAngle(float Angle)
{
	TIM_SetCompare4 (TIM2 ,500+(2000*Angle/180));
}
