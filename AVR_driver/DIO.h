/*
 * DIO.h
 *
 *  Created on: NOV 30, 2020
 *      Author: Elgharib
 */

#ifndef  DIO_h
#define DIO_h

void Set_PinDirection( u8 Port_Number, u8 Pin_Number, u8 Direction );
void Set_PinValue( u8 Port_Number, u8 Pin_Number, u8 Value );
u8 GetPinValueop(u8 Port_Number,u8 Pin_Number);
void Set_PortDirection( u8 Port_Number, u8 Direction );
void Set_PortValue( u8 Port_Number, u8 Value );
u8 Get_PortValue( u8 Port_Number );

#endif 
