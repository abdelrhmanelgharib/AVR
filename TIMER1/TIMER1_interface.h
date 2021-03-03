/*
 * TIMER1_interface.h
 *
 *  Created on: Feb 22, 2021
 *      Author: Elgharib
 */

#ifndef MCAL_TIMER1_TIMER1_INTERFACE_H_
#define MCAL_TIMER1_TIMER1_INTERFACE_H_


typedef enum
{
    TIMER1_NO_Prescaler = 1 ,
    TIMER1_Prescaler_8 ,
    TIMER1_Prescaler_64 ,
    TIMER1_Prescaler_256 ,
    TIMER1_Prescaler_1024 ,
    TIMER1_Prescaler_FallExtClk ,
    TIMER1_Prescaler_RaisExtClk
}Timer1_Prescaler_type;


typedef enum
{
    TIMER1_NORMAL_MODE = 0,
    TIMER1_CTC_MODE ,
    TIMER1_FASTPWM_MODE ,
    TIMER1_PHASECORRECT_MODE

}Timer1_Mode_type;

typedef enum
{
    TIMER1_DISCONNECT_OC0 = 0 ,
    TIMER1_TOGGLE_OC0 ,
    TIMER1_CLEAR_OC0 ,
    TIMER1_SET_OC0,

    TIMER1_NONINVERTINGPWM_OC0 = 2 ,
    TIMER1_INVERTINGPWM_OC0
}Timer1_OC0_type;


#define TIMER1_COM_MASK         0XF8

/**/
void TIMER1_voidICUInitilization(Timer1_Mode_type mode, Timer1_Prescaler_type prescaler);
void TIMER1_void_TimerStop(void);
void TIMER1_void_TimerStart(Timer1_Prescaler_type Prescaler);
u16 TIMER1_u16CurrentTimerValue(void);

u8 TIMER_u8ICUDutyCycle(void);
void TIMER1_voidCLRCounter(void);

#endif /* MCAL_TIMER1_TIMER1_INTERFACE_H_ */
