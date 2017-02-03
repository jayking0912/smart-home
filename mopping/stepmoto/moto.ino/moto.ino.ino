#include "MotorDC1.h"
  MotorDC motorDC(9,8);
  MotorDC1 motorDC1(10,7);

int BZQL;  //避障前
void clean()
{
  int a;
  //a=512;
  a=10;
  while(a--)
  {
   for(int i=2;i<6;i++)
   {
    digitalWrite(i,1);
    delay(10);
   digitalWrite(i,0); 
   }
  }
}

void forward()
{
    motorDC.setSpeed(-100);

  motorDC1.setSpeed(-100);
}

void back()
{
    motorDC.setSpeed(100);

  motorDC1.setSpeed(-100);
}

void left()
{
  motorDC.setSpeed(100);
  motorDC1.setSpeed(100);
  delay(5);
  motorDC1.setSpeed(0);
  motorDC.setSpeed(-100);
  
  delay(20);
}

void right()
{
    
}

void setup() {
  // put your setup code here, to run once:
 pinMode(13,INPUT);    //端口13输入，红外传感器输入口
 for(int i=2;i<6;i++)
  {
    pinMode(i,OUTPUT);
  } 
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i=10000;i++)
  {
  BZQL=digitalRead(13);
  if(BZQL==HIGH)
  {
    forward();
    clean();
    }
  if(BZQL==LOW)
  {
    back();
    delay(10);
    left();
    clean();
    }
  }
}
