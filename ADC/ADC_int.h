/*
 *  Author: El-Gharib
 *  Created on: 18/2/2021
 */



#ifndef ADC_INT_H_
#define ADC_INT_H_

typedef enum
{
    CHANNEL_0 = 0,
    CHANNEL_1 ,
    CHANNEL_2 ,
    CHANNEL_3 ,
    CHANNEL_4 ,
    CHANNEL_5 ,
    CHANNEL_6 ,
    CHANNEL_7 
    
}channel_number;

typedef enum
{
    ADC_prescaler_2 = 1,
    ADC_prescaler_4 ,
    ADC_prescaler_8 ,
    ADC_prescaler_16 ,
    ADC_prescaler_32 ,
    ADC_prescaler_64 ,
    ADC_prescaler_128 
}prescaler_no;

typedef enum
{
    ADC_AREFF = 0,
    ADC_AVCC =1,
    ADC_INTERNAL //3

}vreff_type;


void ADC_voidInitialization(prescaler_no prescaler, vreff_type vreff);

u16 ADC_u16Read(u8 channel);
void ADC_u16ReadInterrupt(u8 channel);

void ADC_voidFuncCallBack(void (Copy_Ptr)(void));



#endif  /* ADC_INT_H_ */
