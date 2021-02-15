/*
 *  Author: El-Gharib
 *  Created on: 7/2/2021
 */


#ifndef REG_H_
#define REG_H_

#define GICR *((volatile u8*) 0x5B)
#define SREG *((volatile u8*) 0x5F)

#define MCUCR *((volatile u8*) 0x55)



#endif  /* REG_H_ */