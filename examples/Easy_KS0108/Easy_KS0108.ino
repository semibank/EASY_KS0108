#include <EASY_KS0108.h>
Adafruit_KS0108_kbv display;

void setup(){
  Serial.begin(115200) ;
  display.begin();
}

void loop(){
    display.clearDisplay() ;                 
    EASY_putsxy(0,  0, "*스마트팜제어기*") ;
    EASY_putsxy(0, 16, "1. 열림닫힘시간",WHITE) ; 
    EASY_putsxy(0, 32, "2. 온도습도설정",BLACK,WHITE) ;
    EASY_putsxy(0, 48, "3. 시간설정하기") ;
    display.display() ;  
    delay(2000);

    display.clearDisplay() ;                 
    EASY_putsxy(0,  0, "*습도설정메뉴*") ;
    EASY_putsxy(0, 16, "1. 올림",WHITE) ; 
    EASY_putsxy(0, 32, "2. 내림",BLACK,WHITE) ;
    EASY_putsxy(0, 48, "3. 저장") ;
    display.display() ;  
    delay(2000);
}

