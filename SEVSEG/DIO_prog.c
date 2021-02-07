/*
 *  Author: El-Gharib
 *  Created on: 1/2/2021
 */


#include "STD_Types.h"
#include "Bit_Math.h"
#include "avr/io.h"

#include "DIO_priv.h"
#include "DIO_config.h"
#include "Dio_int.h"


void DIO_voidInitialize(void)
{
    DDRA = CONC(PIN7_DIRECTION,  PIN6_DIRECTION,  PIN5_DIRECTION,  PIN4_DIRECTION,  PIN3_DIRECTION,  PIN2_DIRECTION,  PIN1_DIRECTION,  PIN0_DIRECTION);
    DDRB = CONC(PIN15_DIRECTION, PIN14_DIRECTION, PIN13_DIRECTION, PIN12_DIRECTION, PIN11_DIRECTION, PIN10_DIRECTION, PIN9_DIRECTION,  PIN8_DIRECTION);
    DDRC = CONC(PIN23_DIRECTION, PIN22_DIRECTION, PIN21_DIRECTION, PIN20_DIRECTION, PIN19_DIRECTION, PIN18_DIRECTION, PIN17_DIRECTION, PIN16_DIRECTION);
    DDRD = CONC(PIN31_DIRECTION, PIN30_DIRECTION, PIN29_DIRECTION, PIN28_DIRECTION, PIN27_DIRECTION, PIN26_DIRECTION, PIN25_DIRECTION, PIN24_DIRECTION);  
}


void DIO_voidSetPin(u8 pin_num , u8 value)
{
    if (value == HIGH)
    {
        if ((pin_num >=0) && (pin_num <8))
        {
            SETBIT(PORTA, pin_num);
        }
        else if((pin_num >=8) && (pin_num < 16))
        {
            SETBIT(PORTB, (pin_num-8));
        }
        else if(( pin_num >=16) && (pin_num < 24 ))
        {
            SETBIT(PORTC, (pin_num-16));
        }
        else 
        {
            SETBIT(PORTD, (pin_num-24));
        }
    }
    else if(value == LOW)
    {
        if ((pin_num >=0) && (pin_num <8))
        {
            CLRBIT(PORTA, pin_num);
        }
        else if((pin_num >=8) && (pin_num < 16))
        {
            CLRBIT(PORTB, (pin_num-8));
        }
        else if(( pin_num >=16) && (pin_num < 24 ))
        {
            CLRBIT(PORTC, (pin_num-16));
        }
        else
        {
        	CLRBIT(PORTD, (pin_num-24));
        }
        
    }
}


void DIO_voidTogPin(u8 pin_num)
{
    if ((pin_num >=0) && (pin_num <8))
    {
        TGLBIT(PORTA, pin_num);
    }
    else if((pin_num >=8) && (pin_num < 16))
    {
        TGLBIT(PORTB, (pin_num-8));
    }
    else if(( pin_num >=16) && (pin_num < 24 ))
    {
        TGLBIT(PORTC, (pin_num-16));
    }
    else if(( pin_num >=24) && (pin_num < 32 ))
    {
        TGLBIT(PORTD, (pin_num-24));
    }
    else 
    {
        /* do nothing */
    }
}


u8 DIO_u8GetPin(u8 pin_num)
{
	u8 ret;

    if ((pin_num >=0) && (pin_num <8))
    {
        ret = GETBIT(PINA, pin_num);
    }
    else if((pin_num >=8) && (pin_num < 16))
    {
        ret = GETBIT(PINB, (pin_num-8));
    }
    else if(( pin_num >=16) && (pin_num < 24 ))
    {
        ret = GETBIT(PINC, (pin_num-16));
    }
    else if (( pin_num >=24) && (pin_num < 32 ))
    {
        ret = GETBIT(PIND, (pin_num-24));
    }
    else 
    {
        /* do nothing */
    }
    return ret;
}
