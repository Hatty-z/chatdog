#include "stm32f10x.h"                  // Device header

void LED_Init(void )
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Pin=GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init (GPIOB,&GPIO_InitStruct);
		
}

void LED_1_W(uint16_t BitVal)
{
	GPIO_WriteBit(GPIOB,GPIO_Pin_3,BitVal);
}

void LED_2_W(uint16_t BitVal)
{
	GPIO_WriteBit(GPIOB,GPIO_Pin_4,BitVal);
}

void LED_3_W(uint16_t BitVal)
{
	GPIO_WriteBit(GPIOB,GPIO_Pin_5,BitVal);
}

void LED_4_W(uint16_t BitVal)
{
	GPIO_WriteBit(GPIOB,GPIO_Pin_6,BitVal);
}

void LED_ALL_W(uint16_t BitVal)
{
	GPIO_WriteBit(GPIOB,GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6,BitVal);
}
