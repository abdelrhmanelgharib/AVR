/*
 *  Author: El-Gharib
 *  Created on: 17/2/2021
 */

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_Math.h"
#include "DIO_Interface.h"
#include "Memmap.h"



void DIO_voidSetPinValue(port_num Port, pin_num Pin, value_type Value)
{
    if (Value == LOW)
    {
        switch (Port)
        {
        case PORTA_ID:
            CLRBIT(PORTA, Pin);
            break;
        case PORTB_ID:
            CLRBIT(PORTB, Pin);
            break;
        case PORTC_ID:
            CLRBIT(PORTC, Pin);
            break;
        case PORTD_ID:
            CLRBIT(PORTD, Pin);
            break;
        }
    }
    else if(Value == HIGH)
    {
        switch (Port)
        {
        case PORTA_ID:
            SETBIT(PORTA, Pin);
            break;
        case PORTB_ID:
            SETBIT(PORTB, Pin);
            break;
        case PORTC_ID:
            SETBIT(PORTC, Pin);
            break;
        case PORTD_ID:
            SETBIT(PORTD, Pin);
            break;

        } 
    }

}

void DIO_voidSetPinDirection(port_num Port, pin_num Pin, direction_type Direction)
{
    if(Direction == INPUT)
    {
        switch (Port)
        {
        case PORTA_ID:
            CLRBIT(DDRA, Pin);
            break;
        case PORTB_ID:
            CLRBIT(DDRB, Pin);
            break;
        case PORTC_ID:
            CLRBIT(DDRC, Pin);
            break;
        case PORTD_ID:
            CLRBIT(DDRD, Pin);
            break;
        }
    }
    else if(Direction == OUTPUT)
    {
        switch (Port)
        {
        case PORTA_ID:
            SETBIT(DDRA, Pin);
            break;
        case PORTB_ID:
            SETBIT(DDRB, Pin);
            break;
        case PORTC_ID:
            SETBIT(DDRC, Pin);
            break;
        case PORTD_ID:
            SETBIT(DDRD, Pin);
            break;
        }
    }
}

value_type DIO_u8GetPinValue(port_num Port, pin_num Pin)
{
    value_type ret_val;
    switch (Port)
        {
        case PORTA_ID:
            ret_val = GETBIT(PINA, Pin);
            break;
        case PORTB_ID:
            ret_val = GETBIT(PINB, Pin);
            break;
        case PORTC_ID:
            ret_val = GETBIT(PINC, Pin);
            break;
        case PORTD_ID:
            ret_val = GETBIT(PIND, Pin);
            break;
        }
        return ret_val;
}

void DIO_voidTogPin(port_num Port, pin_num Pin)
{
    switch (Port)
    {
    case PORTA_ID:
        TGLBIT(PORTA, Pin);
        break;
    case PORTB_ID:
        TGLBIT(PORTB, Pin);
        break;
    case PORTC_ID:
        TGLBIT(PORTC, Pin);
        break;
    case PORTD_ID:
        TGLBIT(PORTD, Pin);
        break;
    }
}

void DIO_voidSetPortValue(port_num Port, u8 Value)
{
    switch (Port)
    {
    case PORTA_ID:
        PORTA = Value;
        break;
    case PORTB_ID:
        PORTB = Value;
        break;
    case PORTC_ID:
        PORTC = Value;
        break;
    case PORTD_ID:
        PORTD = Value;
        break;
    }
    
}

void DIO_voidSetPortDirection(port_num Port, u8 Direction)
{
    switch (Port)
    {
    case PORTA_ID:
        DDRA = Direction;
        break;
    case PORTB_ID:
        DDRB = Direction;
        break;
    case PORTC_ID:
        DDRC = Direction;
        break;
    case PORTD_ID:
        DDRD = Direction;
        break;
    }
    
}
