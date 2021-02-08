/*
 *  Author: El-Gharib
 *  Created on: 8/2/2021
 *  Version: 1
 */


#include "avr/io.h"
#include "avr/delay.h"

#include "STD_Types.h"
#include "Bit_Math.h"
#include "DIO_int.h"
#include "LCD_int.h"



int main()
{
	DIO_voidInitialize();
    LCD_voidInit();

    LCD_voidCommand(CLR_DISPLAY);

    LCD_voidSentSTR("Welcome to");

    LCD_voidCommand(NEXT_LINE);

    LCD_voidSentSTR("4 BIT Mode -_-");


    return 0;
}
