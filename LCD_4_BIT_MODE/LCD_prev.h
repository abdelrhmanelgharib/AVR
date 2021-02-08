/*
 *  Author: El-Gharib
 *  Created on: 2/2/2021
 */


#ifndef LCD_PREV_H_
#define LCD_PREV_H_


#define BIT_MODE_8_             0b00110000
#define BIT_MODE_4_             0b00100000

#define ONE_LINE                0b00100000
#define TWO_LINE                0b00101000

#define DISPLAY_ON_CURSOR_OFF   0b00001100
#define DISPLAY_CURSOR_OFF      0b00001000

#define CURSOR_DIPLAY_ON        0b00001110

static void LCD_voidCmdData(u8);



#endif  /* LCD_PREV_H_ */
