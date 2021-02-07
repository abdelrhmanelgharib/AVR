/*
 *  Author: El-Gharib
 *  Created on: 2/2/2021
 */


#ifndef SEVSEG_int_H_
#define SEVSEG_int_H_


void SEVSEG_voidInitilize(void);
void SEVSEG_voidDisplay(u8 seg_num, u8 num_to_diplay);

void SEVSEG_voidEnable(u8 seg_num);
void SEVSEG_voidDisable(u8 seg_num);


#define SEG0  0
#define SEG1  1

#endif  /* SEVSEG_int_H_ */