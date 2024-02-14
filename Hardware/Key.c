#include "stm32f10x.h"                  // Device header
#include "Delay.h"

void Key_Init(void )
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode=GPIO_Mode_IPD;
	GPIO_InitStruct.GPIO_Pin=GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init (GPIOB ,&GPIO_InitStruct);
	
}

uint8_t Key_GetNum(void )
{
	uint8_t KeyNum=0;
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_12)==1)//代表按键按下
	{
		Delay_ms(20);//消抖（按键刚按下会有抖动）
		while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_12)==1);//检测按键松手的情况
		Delay_ms(20);
		KeyNum =1;
	}
	
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_13)==1)//代表按键按下
	{
		Delay_ms(20);//消抖（按键刚按下会有抖动）
		while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_13)==1);//检测按键松手的情况
		Delay_ms(20);
		KeyNum =2;
	}
	
	return KeyNum ;
}
