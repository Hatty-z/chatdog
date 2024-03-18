#ifndef __Service_H
#define __Service_H

/*最终呈现*/
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
void Dog_Forward(void);//前进步态
void Dog_Back(void);//后退步态
void Dog_Left(void);//左转步态
void Dog_Right(void);//右转步态
void Dog_Wave(void);//招手姿势
void Dog_Swing(void);//摇摆姿态
void Dog_Down(void);//趴下姿态
void Dog_Sit(void);//坐下姿态

#endif
