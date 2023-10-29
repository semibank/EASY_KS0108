# EASY_KS0108
종속라이브러리


1.원저작자의 한글 라이브러리를 활용하였습니다 저작자 링크
  https://raw.githubusercontent.com/sookmook/EURK_Arduino

2. SSD1306을 GLCD KS0108용으로 변경하였습니다
   #include <Adafruit_KS0108_kbv.h>
   //#include <Adafruit_SSD1306.h>

3. 함수 추가
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
