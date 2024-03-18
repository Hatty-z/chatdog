#ifndef __Service_H
#define __Service_H

/*���ճ���*/
void Final(void);
void RE_ALL(void);
void Start_up(void);
void EX_Forward(void);
void EX_Backward(void);
void EX_Left(void);
void EX_Right(void);
void EX_Wave(void);
void EX_Swing(void);
void EX_Down(void);
void EX_Sit(void);
void Final_Init(void);

void Servo_L_F(float Angle);
void Servo_L_B(float Angle);
void Servo_R_F(float Angle);
void Servo_R_B(float Angle);
void Dog_Forward(void);//ǰ����̬
void Dog_Back(void);//���˲�̬
void Dog_Left(void);//��ת��̬
void Dog_Right(void);//��ת��̬
void Dog_Wave(void);//��������
void Dog_Swing(void);//ҡ����̬
void Dog_Down(void);//ſ����̬
void Dog_Sit(void);//������̬

#endif
