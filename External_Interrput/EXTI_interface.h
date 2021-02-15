/*
 *  Author: El-Gharib
 *  Created on: 7/2/2021
 */



#ifndef MCAL_EXTERNAL_INTERRPUT_EX_INT_H_
#define MCAL_EXTERNAL_INTERRPUT_EX_INT_H_



#define INT0_PIN PIN26
#define INT1_PIN PIN27
#define INT2_PIN PIN10

void EXTI_voidInit(u8 Int_Type);


/* change mode of falling- rising- low- logical change */
void EXTI_voidChangeMode(ext_mode_type type, interrput_pin pin);



#endif  /* MCAL_EXTERNAL_INTERRPUT_EX_INT_H_ */
