#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_KS0108_kbv.h>

#include "ASCFont.h"  //영어폰트  
#include "KSFont.h"   //한글폰트
#include "Fonts/FreeSans9pt7b.h"
#include "Fonts/FreeSerif12pt7b.h"
Adafruit_KS0108_kbv display;

#include "hanfont.h"



void setup(){
    Serial.begin(9600);
    display.begin();
    display.clearDisplay();
    Serial.println(display.width());     
    Serial.println(display.height());
    display.display();
    display.setRotation(0);
    display.fillScreen(BLACK); //배경색상 흰색 지정
    
    
    //출력할 문자 설정 
    //display.setFont(&FreeSerif12pt7b);
    display.setTextSize(1);
    inputString = "우리나라 한글 만세";
    
    //조합형 한글 이미지 만들어 출력
    //char paramChar[inputString.length()+1];
    //inputString.toCharArray(paramChar, inputString.length() + 1);    
   // matrixPrint(0,10,paramChar);
    
    matrixPrint(0,32,"이지로봇학원");
    //matrixPrint(0,48,inputString.c_str());
    display.display();
}


void loop()
{
    display.clearDisplay();
    display.display();
    matrixPrint(0,0,"이지로봇학원");
    matrixPrint(0,16,"EasyRobot.123456");
    
    display.setFont(&FreeSans9pt7b);
    display.setCursor(0, 44);
    display.setTextSize(1);
    display.print("Easy");
    display.setCursor(40, 60);
    display.setTextSize(2);
    display.println("Robot");
    display.display();
    delay(2000);
    
    
}
