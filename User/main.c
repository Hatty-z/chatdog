#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Servo.h"
#include "Serial.h"
#include "NRF24L01.h"
#include "Nrf24L01_Ins.h"
#include "Final.h"

float Angle;
uint16_t RxData;
/*
   01 前进；02 后退；03 左转；
   04 右转；05 招手；06 摇摆；
   07 坐下；08 趴下；09 停止；
   */

int main(void)
{   
	Final_Init();
	Start_up();    //开机动画
	
	while(1)
	{   
         Final();
	}
}
