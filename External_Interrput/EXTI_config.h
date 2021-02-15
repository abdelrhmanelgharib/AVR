/*
 *  Author: El-Gharib
 *  Created on: 7/2/2021
 */


#ifndef EXTI_CONFIG_H_
#define EXTI_CONDIG_H_


#define I_BIT 7



typedef enum
{
    EXT_LOW_MODE = 0,
    EXT_RAISING_MODE , 
    EXT_FAILLING_MODE ,
    EXT_ANY_CHANGE_MODE ,    
}ext_mode_type;


typedef enum
{
    ISC00 = 0,
    ISC01 ,
    ISC10 ,
    ISC11 ,
    INT2 = 5 ,
    INT0 ,
    INT1 ,
}interrput_pin;





#endif  /* CONFIG_H_ */