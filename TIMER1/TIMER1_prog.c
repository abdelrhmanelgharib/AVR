/*
 * TIMER1_interface.h
 *
 *  Created on: Feb 22, 2021
 *      Author: Elgharib
 */

#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Math.h"
#include "TIMER1_interface.h"

#include "../DIO/Memmap.h"


volatile static u8 	flag   = 0;
volatile static u16 temp1 = 0;
volatile static u16 temp2 = 0;
volatile static u16 temp3 = 0;
volatile static u8 x      = 0;
volatile static u8 y      = 0;

void TIMER1_voidICUInitilization(Timer1_Mode_type mode, Timer1_Prescaler_type prescaler)
{
    /* select mode of timer1 */
    switch (mode)
    {
    case TIMER1_NORMAL_MODE:
        CLRBIT(TCCR1A, WGM10);
        CLRBIT(TCCR1A, WGM11);
        CLRBIT(TCCR1B, WGM12);
        CLRBIT(TCCR1B, WGM13);
        break;
    
    default:
        break;
    }

    TCCR1B &= TIMER1_COM_MASK;
    TCCR1B |=prescaler;

    /* OC0 */

    /* Select triger */
    SETBIT(TCCR1B, ICES1);

    /* enable ICU interrupt */
    SETBIT(TIMSK, TICIE1);

}


void TIMER1_void_TimerStop(void)
{
    TCCR1B &=TIMER1_COM_MASK;
}


void TIMER1_void_TimerStart(Timer1_Prescaler_type Prescaler)
{
    TCCR1B &= TIMER1_COM_MASK;
    TCCR1B |= Prescaler;
}

u8 TIMER_u8ICUDutyCycle(void)
{
    u16 D;
    u16 Period;
    u16 On_time;
    
    while (flag !=3);
    Period = temp2 - temp1;
    On_time = temp3 - temp2;
    D = (On_time / Period) * 100;

    return D;
}

u16 TIMER1_u16CurrentTimerValue(void)
{
	return TCNT1;
}

void TIMER1_voidCLRCounter(void)
{
	TCNT1 = 0;
}

ISR(TIMER1_CAPT_vect)
{
    if (flag == 0)
    {
        /* take copy from ICR register 2:40 */
        x = ICR1L;
        y = ICR1H;

        temp1 = x | (y<<8);
        flag = 1;
    }
    else if (flag == 1)
    {
        x = ICR1L;
        y = ICR1H;

        temp2 = x | (y<<8);
        flag =2;
        /* change trigger to be on falling edge to detcet on time */
        CLRBIT(TCCR1B, ICES1);
    }
    else
    {
        x = ICR1L;
        y = ICR1H;

        temp3 = x | (y<<8);
        flag =2;

    }
}
