/*
 * lcd_config.h
 *
 *  Created on: NOV 30, 2020
 *      Author: Elgharib
 */
#ifndef lcd_h
#define lcd_h

#include "DIO.h"
#include "lcd_config.h"

#define CLR_Display 0x01
#define Return_Home 0x02
#define Display_on 0x0D
#define Cursor_on 0x0C
#define Cursor blink 0x0B
#define TWO_LINE_MODE 0x38
#define auto_increment 0x06
#define Cursor_home 0x80


void LCD_Init(void);
void LCD_Command(u8 command);
void LCD_SENDSTR(s8* str);



#endif