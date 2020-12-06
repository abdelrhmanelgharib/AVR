/*
 * MACROS.h
 *
 *  Created on: NOV 30, 2020
 *      Author: Elgharib
 */
#ifndef MACROS_h
#define MACROS_h

#define SETBIT(R,B) (R|=(1<<B))
#define CLRBIT(R,B) (R&=~(1<<B))
#define TGLBIT(R,B) (R^=(1<<B))
#define GETBIT(R,B) (R&(1<<B)>>B)

#endif