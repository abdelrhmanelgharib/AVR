/*
 * TIMER0_prog.c
 *
 *  Created on: Feb 20, 2021
 *      Author: 2bdoa
 */

#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Math.h"
#include "TIMER0_int.h"

#include "../DIO/Memmap.h"



static volatile void (*OVFFuncCallBack) (void)= (void*)0;
static volatile void (*CTCFuncCallBack) (void)= (void*)0;

static u32 OverFlowNumber = 0;
static u8 Preload = 0;



void TIMER0_void_Initilization(TimerMode_type Mode, Prescaler_type Prescaler, TimerOC0_type OC0_type)
{
    switch (Mode)
    {
    case TIMER0_NORMAL_MODE:
        CLRBIT(TCCR0, WGM00);
        CLRBIT(TCCR0, WGM01);
        break;
    case TIMER0_CTC_MODE:
        CLRBIT(TCCR0, WGM00);
        SETBIT(TCCR0, WGM01);
        break;
    case TIMER0_FASTPWM_MODE:
        SETBIT(TCCR0, WGM00);
        SETBIT(TCCR0, WGM01);
        break;
    case THIMER0_PHASECORRECT_MODE:
        SETBIT(TCCR0, WGM00);
        CLRBIT(TCCR0, WGM01);
        break;
    }
    
    TCCR0 &= TIMER0_COM_MASK;
    TCCR0 |= Prescaler;


    TCCR0 &= 0b11001111;
    TCCR0 |= (OC0_type<<4);

}   /* TIMER0_void_Initilization */

void TIMER0_void_TimerStop(void)
{
    TCCR0 &= TIMER0_COM_MASK;
}   /* TIMER0_void_TimerStop */

void TIMER0_void_TimerStart(Prescaler_type Prescaler)
{
    TCCR0 &= TIMER0_COM_MASK;
    TCCR0 |= Prescaler;
}   /* TIMER0_void_TimerStart */

void TIMER0_void_EnableOVERINT(void)
{
    SETBIT(SREG, SREG_I);
    SETBIT(TIMSK, TOIE0);
}   /* TIMER0_void_EnableOVERINT */

void TIMER0_void_DisableOVRINT(void)
{
    CLRBIT(TIMSK, TOIE0);
}   /* TIMER0_void_DisableOVRINT */

void TIMER0_void_SetOVRCallBack(void(*Copy_Ptr)(void))
{
    OVFFuncCallBack = Copy_Ptr;
}   /* TIMER0_void_SetOVRCallBack */

void TIMER0_void_EnableCTCINT(void)
{
    SETBIT(SREG,7);
    SETBIT(TIMSK, OCIE0);
}   /* TIMER0_void_EnableCTCINT */

void TIMER0_void_DisableCTCINT(void)
{
    CLRBIT(TIMSK, OCIE0);
}   /* TIMER0_void_DisableCTCINT */

void TIMER0_void_SetCTCCallBack(void(*Copy_Ptr)(void))
{
    CTCFuncCallBack = Copy_Ptr;
}   /* TIMER0_void_SetCTCCallBack */

void TIMER0_void_SetCompareValue(u8 Copy_cmpValue)
{
    OCR0 = Copy_cmpValue;
}/* TIMER0_void_SetCompareValue */

void TIMER0_void_DesiredTimer_us(u32 Copy_Time, Prescaler_type Prescaler)
{
    u16 Copy_prescaler;
    switch (Prescaler)
    {
    case NO_Prescaler:
        Copy_prescaler = 1;
        break;
    case Prescaler_8:
        Copy_prescaler = 8;
        break;
    case Prescaler_64:
        Copy_prescaler = 64;
        break;
    case Prescaler_256:
        Copy_prescaler = 256;
        break;
    case Prescaler_1024:
        Copy_prescaler = 1024;
        break;
    default:
        return;
    
    }

    u32 TickTime     = (Copy_prescaler*1000000)/TIMER0_F_CPU;
    u32 OverFlowTime = TickTime * TIMER0_REG_CAPACITY;
    u32 DesiredTime  = Copy_Time;

    OverFlowNumber = DesiredTime / OverFlowNumber;
    u32 OverFlowRemTime = DesiredTime % OverFlowTime;
    u32 OverFlowRemCounts = ((float)OverFlowRemTime/OverFlowRemTime) * TIMER0_REG_CAPACITY;
    
    TCNT0 = 0;
    if(OverFlowRemTime>0)
    {
        Preload = TIMER0_REG_CAPACITY - OverFlowRemCounts;
        TCNT0 = Preload;
        OverFlowNumber++;
    }
    TIMER0_void_TimerStart(Copy_prescaler);

}   /* TIMER0_void_DesiredTimer_us */

void TIMER0_void_DesiredTimer_ms(u32 Copy_Time, Prescaler_type Prescaler)
{
    
}   /* TIMER0_void_DesiredTimer_ms */

void TIMER0_void_FastPWM(u8 Copy_DutyCycly, TimerOC0_type OC0_type, Prescaler_type Copy_prescaler)
{
    switch (OC0_type)
    {
    case TIMER0_NONINVERTINGPWM_OC0:
        OCR0 = ((Copy_DutyCycly *255)/100);
        
        break;
    case TIMER0_INVERTINGPWM_OC0:
        OCR0 = 255 - ((TIMER0_REG_CAPACITY * Copy_DutyCycly)/100);
    break;
    }
    TIMER0_void_TimerStart(Copy_prescaler);
}   /* TIMER0_void_FastPWM */

void TIMER0_void_PhaseCorrectPWM(u8 Copy_DutyCycly, TimerOC0_type OC0_type, Prescaler_type Copy_prescaler)
{
    switch (OC0_type)
    {
    case TIMER0_NONINVERTINGPWM_OC0:
        OCR0 = (255 * Copy_DutyCycly)/100;
        break;
    case TIMER0_INVERTINGPWM_OC0:
        OCR0 = 255 - ((TIMER0_REG_CAPACITY * Copy_DutyCycly)/100);

    }
    TIMER0_void_TimerStart(Copy_prescaler);
}   /* TIMER0_void_PhaseCorrectPWM */



//ISR(TIMER0_OVF_vect)
//{
//    static u32 count =0;
//    count++;
//    if (count == OverFlowNumber)
//    {
//        TCNT0 = Preload;
//        count = 0;
//        OVFFuncCallBack();
//    }
//}

