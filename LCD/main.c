 /*
 * LCD.c
 *
 * Created: 12/7/2020 5:27:18 PM
 * Author : Elgharib
 */ 
#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 800000			


#include "lcd.h"

int  main()
{
      LCD_Init();
      LCD_SENDSTR("Elgharib");
      LCD_Command(0xC0);		/* Go to 2nd line*/
	LCD_SENDSTR("************");

	  
      return 0;   
}


