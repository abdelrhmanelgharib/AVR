/*
 * TIMER0_int.h
 *
 *  Created on: Feb 20, 2021
 *      Author: 2bdoa
 */

#ifndef TIMER0_INT_H_
#define TIMER0_INT_H_

typedef enum
{
    NO_Prescaler = 1    ,
    Prescaler_8         ,
    Prescaler_64        ,
    Prescaler_256       ,
    Prescaler_1024      ,
    Prescaler_FallExtClk ,
    Prescaler_RaisExtClk  

}Prescaler_type;

typedef enum
{
    TIMER0_NORMAL_MODE ,
    TIMER0_CTC_MODE ,
    TIMER0_FASTPWM_MODE ,
    THIMER0_PHASECORRECT_MODE

}TimerMode_type;

typedef enum
{
    TIMER0_DISCONNECT_OC0 = 0   ,
    TIMER0_TOGGLE_OC0           ,
    TIMER0_CLEAR_OC0            ,
    TIMER0_SET_OC0              ,

    TIMER0_NONINVERTINGPWM_OC0 = 2 , 
    TIMER0_INVERTINGPWM_OC0 
}TimerOC0_type;

#define TIMER0_F_CPU            16000000UL
#define TIMER0_REG_CAPACITY     256
#define TIMER0_COM_MASK         0XF8


void TIMER0_void_Initilization(TimerMode_type Mode, Prescaler_type Prescaler, TimerOC0_type OC0_type);
void TIMER0_void_TimerStop(void);
void TIMER0_void_TimerStart(Prescaler_type Prescaler);

void TIMER0_void_EnableOVERINT(void);
void TIMER0_void_DisableOVRINT(void);
void TIMER0_void_SetOVRCallBack(void(*Copy_Ptr)(void));

void TIMER0_void_EnableCTCINT(void);
void TIMER0_void_DisableCTCINT(void);
void TIMER0_void_SetCTCCallBack(void(*Copy_Ptr)(void));
void TIMER0_void_SetCompareValue(u8 Copy_cmpValue);

void TIMER0_void_DesiredTimer_us(u32 Copy_Time, Prescaler_type Prescaler);
void TIMER0_void_DesiredTimer_ms(u32 Copy_Time, Prescaler_type Prescaler);

void TIMER0_void_FastPWM(u8 Copy_DutyCycly, TimerOC0_type OC0_type, Prescaler_type Copy_prescaler);
void TIMER0_void_PhaseCorrectPWM(u8 Copy_DutyCycly, TimerOC0_type OC0_type, Prescaler_type Copy_prescaler);


#endif /* TIMER0_INT_H_ */
