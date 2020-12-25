 /*
 * LCD.c
 *
 * Created: 12/7/2020 5:27:18 PM
 * Author : Elgharib
 */ 
#include <avr/io.h>
#define F_CPU 800000UL
#include <util/delay.h>
			


#include "lcd.h"

void main()
{
      LCD_Init();
      LCD_SENDSTR(" Elgharib");
      LCD_Command(0xC0);		/* Go to 2nd line*/
	LCD_SENDSTR("************");   
}


