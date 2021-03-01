/*
 *  Author: El-Gharib
 *  Created on: 18/2/2021
 */

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_Math.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/DIO/Memmap.h"

#include "ADC_int.h"

static void (*ADC_FuncCallBack) (void) = (void*)0 ;


/*  */
void ADC_voidInitialization(prescaler_no prescaler, vreff_type vreff)
{
    /* Enable ADC */
    SETBIT(ADCSRA, ADEN);

    /* Disable ADC interrupt */
    CLRBIT(ADCSRA, ADIE);

    /*ADC Right adjust */
    CLRBIT(ADMUX, ADLAR);


    /* prescaler */
    switch (prescaler)
    {
        case ADC_prescaler_2:
            SETBIT(ADCSRA, ADPS0);
            CLRBIT(ADCSRA, ADPS1);
            CLRBIT(ADCSRA, ADPS2);
            break;
        case ADC_prescaler_4:
            CLRBIT(ADCSRA, ADPS0);
            SETBIT(ADCSRA, ADPS1);
            CLRBIT(ADCSRA, ADPS2);
            break;
        case ADC_prescaler_8:
            SETBIT(ADCSRA, ADPS0);
            SETBIT(ADCSRA, ADPS1);
            CLRBIT(ADCSRA, ADPS2);
            break;
        
        case ADC_prescaler_16:
            CLRBIT(ADCSRA, ADPS0);
            CLRBIT(ADCSRA, ADPS1);
            SETBIT(ADCSRA, ADPS2);
            break;
        
        case ADC_prescaler_32:
            SETBIT(ADCSRA, ADPS0);
            CLRBIT(ADCSRA, ADPS1);
            SETBIT(ADCSRA, ADPS2);
            break;
        
        case ADC_prescaler_64:
            CLRBIT(ADCSRA, ADPS0);
            SETBIT(ADCSRA, ADPS1);
            SETBIT(ADCSRA, ADPS2);
            
            break;
        case ADC_prescaler_128:
            SETBIT(ADCSRA, ADPS0);
            SETBIT(ADCSRA, ADPS1);
            SETBIT(ADCSRA, ADPS2);
            break;
        default:
            break;
    }

    switch (vreff)
    {
        case ADC_AREFF:
            CLRBIT(ADMUX, REFS0);
            CLRBIT(ADMUX, REFS1);
            break;

        case ADC_AVCC:
            CLRBIT(ADMUX, REFS0);
            SETBIT(ADMUX, REFS1);
            break;
        case ADC_INTERNAL:
            SETBIT(ADMUX, REFS0);
            SETBIT(ADMUX, REFS1);
            break;

    }

}

u16 ADC_u16Read(u8 channel)
{
    ADMUX &= 0xE0;
    channel &= 0x07;
    ADMUX |= channel;

    /* start single conversion */
    SETBIT(ADCSRA, ADSC);

    /* wait for conversion */
    while (!(ADCSRA &(1<<ADIF)));

    /* ADC clear flag */
    SETBIT(ADCSRA, ADIF);

    return ADC;
}


void ADC_u16ReadInterrupt(u8 channel)
{
    ADMUX &= 0xE0;
    channel &= 0x07;
    ADMUX |= channel;

    /* enable globel interrupt */
    SETBIT(SREG, SREG_I);
    /* enable adc interrupt */
    SETBIT(ADCSRA, ADIE);

    /* start single conversion */
    SETBIT(ADCSRA, ADSC);
}


void ADC_voidFuncCallBack(void (Copy_Ptr)(void))
{
    ADC_FuncCallBack = Copy_Ptr; 
}


ISR(ADC_vect)
{
    ADC_FuncCallBack();
}
