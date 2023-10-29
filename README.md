# EASY_KS0108

GLCD128*64  KS0108 LCD 라이브러리 입니다
원저작자 sookmook님의 한글 라이브러리를 활용하였습니다.
[https://raw.githubusercontent.com/sookmook/EURK_Arduino]
SSD1306을 KS0108 I2C GLCD로 사용하도록 수정하였습니다. 
(KS0108 + MCP23017)



아래두개의 라이브러리를 함께 사용합니다.
Adafruit-GFX 와 Adafruit_KS0108_kbv
https://github.com/adafruit/Adafruit-GFX-Library 
https://github.com/prenticedavid/Adafruit_KS0108_kbv 




1. SSD1306을 GLCD KS0108용으로 변경하였습니다.
   #include <Adafruit_KS0108_kbv.h>
   //#include <Adafruit_SSD1306.h>



2. 함수 추가
   void EASY_puts(char *s) ;   
   void EASY_puts(char *s, uint16_t color) ;
   void EASY_puts(char *s, uint16_t color, uint16_t bg) ;

   
   
   void EASY_putc(char s) ;
   void EASY_putc(char s, uint16_t color) ;
   void EASY_putc(char s, uint16_t color, uint16_t bg) ;

   
   
   void EASY_putsxy(int XPOS, int YPOS, char *s) ;
   void EASY_putsxy(int XPOS, int YPOS, char *s, uint16_t color) ;
   void EASY_putsxy(int XPOS, int YPOS, char *s, uint16_t color, uint16_t bg) ;

   
   
   void EasyPrint(int XPOS, int YPOS, char *s);
   void EasyPrint(int XPOS, int YPOS, char *s, uint16_t color);
   void EasyPrint(int XPOS, int YPOS, char *s, uint16_t color, uint16_t bg);

   
   
   void EasyWrite(int XPOS, int YPOS, char s);
   void EasyWrite(int XPOS, int YPOS, char s, uint16_t color);
   void EasyWrite(int XPOS, int YPOS, char s, uint16_t color, uint16_t bg); 
