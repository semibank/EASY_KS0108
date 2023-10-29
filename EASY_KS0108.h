/*
  한글 라이브러리 '어우러기' 아두이노 버전 1.0을 참조하여 만들었음
  SSD1306 LCD 대신  KS0108 GLCD I2C용으로 사용하도록 하고 
  lcd print명령에 반전print용 컬러를 지정할 수 있도록하였다.
  종속사용 라이브러리 : Adafruit_GFX, Adafruit_KS0108_kbv  
  원본한글라이브러리  : 숙묵 지영민 ( mailto://sookmook@sookmook.org )
*/

#ifndef __EASY_KS0108_H
#define __EASY_KS0108_H

#include <Adafruit_GFX.h>
#include <Adafruit_KS0108_kbv.h>
//#include <Adafruit_SSD1306.h>
#include "sfif_inc.h"
#include "Hangeul_Font.h"
#include "ASCII_Font.h"

/* 2바이트 조합형 한글을 위한 공용체 */
#ifndef __HAN_UNION
#define __HAN_UNION
union HAN_UNION {
  struct {
    word l : 5 ;
    word m : 5 ;
    word f : 5 ;
    word s : 1 ;
  } a ; /* 자모 */
  struct {
    byte s ;
    byte f ;
  } c ; /* 코드 */
} ;
#endif

/* 현대국어에서 표현 가능한 모든 한글의 수 = 11172 */
/* (초성 19 * 중성 21 * 종성(받침 없는 것 포함) 28 */
#ifndef ALL_OF_HAN
#define ALL_OF_HAN 11172
#endif

/* 한글 코드 정의 */
#ifndef __HANCODE__DEFINE
#define __HANCODE__DEFINE
#define HANCODE_UTF_8       0
#define HANCODE_EXTENED_KSC 1
#endif

/* 유니코드에서 한글의 시작 위치 */
#ifndef UNICODE_HAN_BASE
#define UNICODE_HAN_BASE 0xAC00
#endif

void EURK_hancode(int kind) ;
void EASY_setxy(int x, int y) ;

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


#endif
