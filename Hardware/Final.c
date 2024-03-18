#include "stm32f10x.h"                  // Device header
#include "Servo.h"
#include "OLED.h"
#include "Serial.h"
#include "Delay.h"

//多次实验发现每移动1°大约要3ms

uint16_t Rx_Data;

void Servo_L_F(float Angle)
{
	Servo1_SetAngle(Angle);
}

void Servo_L_B(float Angle)
{
	Servo2_SetAngle(Angle);
}

void Servo_R_F(float Angle)
{
	Servo3_SetAngle(Angle);
}

void Servo_R_B(float Angle)
{
	Servo4_SetAngle(Angle);
}

void Dog_Forward(void)//前进步态
{
	//1
	Servo_L_F(90);
	Servo_L_B(50);
	Servo_R_F(130);
	Servo_R_B(90);
		Delay_ms(135);
	//2
	Servo_L_F(130);
	Servo_L_B(50);
	Servo_R_F(130);
	Servo_R_B(50);
		Delay_ms(135);
	//3
	Servo_L_F(130);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(50);
		Delay_ms(135);
	//4
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(90);
		Delay_ms(135);
	//5
	Servo_L_F(50);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(130);
		Delay_ms(135);
	//6
	Servo_L_F(50);
	Servo_L_B(130);
	Servo_R_F(50);
	Servo_R_B(130);
		Delay_ms(135);
	//7
	Servo_L_F(90);
	Servo_L_B(130);
	Servo_R_F(50);
	Servo_R_B(90);
		Delay_ms(135);
	//8
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(90);
		Delay_ms(135);
}

void Dog_Back(void)//后退步态
{
	//1
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(90);
		Delay_ms(135);
	//2
	Servo_L_F(90);
	Servo_L_B(130);
	Servo_R_F(50);
	Servo_R_B(90);
		Delay_ms(135);
	//3
	Servo_L_F(50);
	Servo_L_B(130);
	Servo_R_F(50);
	Servo_R_B(130);
		Delay_ms(135);
	//4
	Servo_L_F(50);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(130);
		Delay_ms(135);
	//5
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(90);
		Delay_ms(135);
	//6
	Servo_L_F(130);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(50);
		Delay_ms(135);
	//7
	Servo_L_F(130);
	Servo_L_B(50);
	Servo_R_F(130);
	Servo_R_B(50);
		Delay_ms(135);
	//8
	Servo_L_F(90);
	Servo_L_B(50);
	Servo_R_F(130);
	Servo_R_B(90);
		Delay_ms(135);
}


void Dog_Left(void)//左转步态
{
	//1
	Servo_L_F(130);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(130);
		Delay_ms(500);
	//2
	Servo_L_F(130);
	Servo_L_B(50);
	Servo_R_F(50);
	Servo_R_B(130);
		Delay_ms(500);
	//3
	Servo_L_F(90);
	Servo_L_B(50);
	Servo_R_F(50);
	Servo_R_B(90);
		Delay_ms(500);
	//4
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(90);
		Delay_ms(500);
}

void Dog_Right(void)//右转步态
{
	//1
	Servo_L_F(90);
	Servo_L_B(50);
	Servo_R_F(50);
	Servo_R_B(90);
		Delay_ms(500);
	//2
	Servo_L_F(130);
	Servo_L_B(50);
	Servo_R_F(50);
	Servo_R_B(130);
		Delay_ms(500);
	//3
	Servo_L_F(130);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(130);
		Delay_ms(500);
	//4
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(90);
		Delay_ms(500);
}

void Dog_Wave(void)//招手姿势
{
	//1
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(110);
	Servo_R_B(90);
		Delay_ms(135);
	//2
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(145);
	Servo_R_B(90);
		Delay_ms(135);
	//3
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(180);
	Servo_R_B(90);
		Delay_ms(135);
	//4
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(145);
	Servo_R_B(90);
		Delay_ms(135);
}

void Dog_Swing(void)//摇摆姿态
{
	//1
	Servo_L_F(30);
	Servo_L_B(30);
	Servo_R_F(150);
	Servo_R_B(150);
		Delay_ms(135);
	//2
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(90);
		Delay_ms(135);
	//3
	Servo_L_F(150);
	Servo_L_B(150);
	Servo_R_F(30);
	Servo_R_B(30);
		Delay_ms(135);
	//4
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(90);
		Delay_ms(135);
}

void Dog_Down(void)
{
	Servo_L_F(0);
	Servo_L_B(0);
	Servo_R_F(180);
	Servo_R_B(180);
}

void Dog_Sit(void)
{
	Servo_L_F(90);
	Servo_L_B(0);
	Servo_R_F(90);
	Servo_R_B(180);
}

void RE_ALL(void)//恢复表情、姿态
{
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(90);
	OLED_Show_eyes_confot();
	Delay_ms(500);
	OLED_Clear();
    OLED_ShowMyPicture(3,32,32,48,0);
    OLED_ShowMyPicture(3,64,32,48,0);
}

void Start_up(void)//开机
{
	Servo_L_F(90);
	Servo_L_B(90);
	Servo_R_F(90);
	Servo_R_B(90);
	OLED_Show_eyes_crash();
	Delay_ms(100);
	OLED_Show_eyes_confot();
	Delay_ms(100);
	OLED_Show_eyes_round();
	Delay_ms(500);
	OLED_ShowMyPicture(3,32,32,48,0);
    OLED_ShowMyPicture(3,64,32,48,0);
}

void EX_Forward(void)
{
	OLED_Show_eyes_crash();
	Dog_Forward();
}

void EX_Backward(void)
{
	OLED_Show_eyes_crash();
	Dog_Back();
}

void EX_Left(void)
{
	OLED_Show_eyes_crash();
	Dog_Left();
}

void EX_Right(void)
{
	OLED_Show_eyes_crash();
	Dog_Right();
}

void EX_Wave(void)
{
	OLED_Show_eyes_confot();
	Dog_Wave();
	RE_ALL();
}

void EX_Swing(void)
{
	OLED_Show_eyes_crash();
	Dog_Swing();
	RE_ALL();
}

void EX_Down(void)
{
	Dog_Down();
	OLED_Show_eyes_confot();
}

void EX_Sit(void)
{
	Dog_Sit();
	OLED_Show_eyes_confot();
}

void Final_Init(void)
{
	OLED_Init();
	Servo_Init();
	Serial_Init();
}

void Final(void)
{
	while(1)
	{
		if(Serial_GetRxFlag()==01)
		{
			Rx_Data = Serial_GetRxData();
			switch(Rx_Data)
			{
				case 0x01:
					EX_Forward();
				    break;
				case 0x02:
					EX_Backward();
				    break;
				case 0x03:
					EX_Left();
				    break;
				case 0x04:
					EX_Right();
				    break;
				case 0x05:
					EX_Wave();
				    break;
				case 0x06:
					EX_Swing();
				    break;
				case 0x07:
					EX_Sit();
				    break;
				case 0x08:
					EX_Down();
				    break;
				case 0x09:
					RE_ALL();
				    break;
			}
		}
	}
}
