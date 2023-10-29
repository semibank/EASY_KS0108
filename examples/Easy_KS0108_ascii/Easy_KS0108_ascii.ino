#include <EASY_KS0108.h>
Adafruit_KS0108_kbv display;

void setup(){
  Serial.begin(115200) ;
  display.begin();
}

void loop(){
    display.clearDisplay() ;     
    /*            
    EasyPrint(0,  0, "*스마트팜제어기*") ;
    EasyPrint(0, 16, "1. 열림닫힘시간",WHITE) ; 
    EasyWrite(0, 32, char(41),BLACK,WHITE) ;
    EasyWrite(0, 0, char(20)) ;
    */
    display.clearDisplay() ;  
    EASY_setxy(0,0);
    for(int i=0;i<64;i++){
        EASY_putc(char(i));
    }    
    display.display() ;  
    delay(2000);
    
    display.clearDisplay() ;  
    EASY_setxy(0,0);
    for(int i=64;i<128;i++){
        EASY_putc(char(i));
    }
    display.display() ;  
    delay(2000);
    
    
    display.clearDisplay() ;  
    display.setCursor(0, 0);  
    for(int i=0;i<128;i++){
        display.write(char(i));
    }    
    display.display() ;  
    delay(2000);
    display.clearDisplay() ;  
    display.setCursor(0, 0);  
    for(int i=128;i<256;i++){
        display.write(char(i));
    }
    display.display() ;  
    delay(2000);
   
}

