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
   01 ǰ����02 ���ˣ�03 ��ת��
   04 ��ת��05 ���֣�06 ҡ�ڣ�
   07 ���£�08 ſ�£�09 ֹͣ��
   */

int main(void)
{   
	Final_Init();
	Start_up();    //��������
	
	while(1)
	{   
         Final();
	}
}
