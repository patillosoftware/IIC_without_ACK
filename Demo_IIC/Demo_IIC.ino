//Vist http://www.14blog.com/archives/1358 for more..

#include <IIC_without_ACK.h>
#include "oledfont.c"   //codetab

#define OLED_SDA 8
#define OLED_SCL 9

IIC_without_ACK lucky(OLED_SDA, OLED_SCL);//9 -- sda,10 -- scl

void setup()
{
  lucky.Initial();
  delay(10);
}

void loop()
{
  lucky.Fill_Screen(0xff);
  delay(2000);
  lucky.Fill_Screen(0xf0);
  delay(2000);
  lucky.Fill_Screen(0x00);
  lucky.Char_F6x8(0,0,"HelTec AutoMation");
  lucky.Char_F6x8(0,2,"cn.heltec@gmail.com");
  lucky.Char_F6x8(0,4,"Made in china");
//  lucky.Char_F8x16(0,6,"ChengDu");
//  lucky.CN_F16x16(0,0,0);
//  lucky.CN_F16x16(16,0,1);
//  lucky.CN_F16x16(32,0,2);
//  lucky.CN_F16x16(48,0,3);
//  lucky.CN_F16x16(64,0,4);
  delay(5000);
  lucky.Fill_Screen(0x00);
//  delay(1000);
//  lucky.Fill_Screen(0x00);
  lucky.Draw_BMP(0,0,128,8,BMP1);
  delay(5000);
}
