/*
 * DIO.c
 *
 *  Created on: NOV 30, 2020
 *      Author: Elgharib
 */
#include "DIO.h"

volatile u8* DDR[4] = {&DDRA, &DDRB, &DDRC, &DDRD};
volatile u8* PIN[4] = {&PINA, &PINB, &PINC, &PIND};
volatile u8* PRT[4] = {&PORTA, &PORTB, &PORTC, &PORTD};


void Set_PinDirection( u8 Port_Number, u8 Pin_Number, u8 Direction )
{
    if ( Direction == 0 )
        CLRBIT( *DDR[Port_Number], Pin_Number );
        else
            SETBIT( *DDR[Port_Number], Pin_Number );
}

void Set_PinValue( u8 Port_Number, u8 Pin_Number, u8 Value )
{
    if ( Value == 0 )
        CLRBIT( *PRT[Port_Number], Pin_Number );
        else
            SETBIT( *PRT[Port_Number], Pin_Number );   
}
u8 GetPinValueop(u8 Port_Number,u8 Pin_Number)
{
	return GETBIT(*PIN[Port_Number],Pin_Number);
}
void Set_PortDirection( u8 Port_Number, u8 Direction )
{
    *DDR[Port_Number] = Direction;  
}

void Set_PortValue( u8 Port_Number, u8 Value )
{
    *PRT[Port_Number] = Value;      
}

u8 Get_PortValue( u8 Port_Number )
{
    return *PIN[Port_Number];
}
