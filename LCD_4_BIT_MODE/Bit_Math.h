/*
 *  Author: El-Gharib
 *  Created on: 31/1/2021
 */



#ifndef BitMath_H_
#define BitMath_H_ 


#define SETBIT(R,B) (R|=(1<<B))
#define CLRBIT(R,B) (R&=~(1<<B))
#define TGLBIT(R,B) (R^=(1<<B))
#define GETBIT(R,B) ((R>>B)&0x01)


#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)  CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0)  0b##b7##b6##b5##b4##b3##b2##b1##b0 

                       

#endif /* BitMath_H_*/