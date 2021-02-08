/*
 *  Author: El-Gharib
 *  Created on: 2/2/2021
 */



#ifndef LCD_INT_H_
#define LCD_INT_H_

void LCD_voidWriteData(u8 data);
void LCD_voidCommand(u8 command);
void LCD_voidInit(void);
void LCD_voidSentSTR(char* Str);

#define CLR_DISPLAY     0X01
#define NEXT_LINE		0xc0
#define RETURN_HOME     0X02




#endif  /* LCD_INT_H_ */
