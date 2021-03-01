/*
 * I2C.c
 *
 *  Created on: Feb 22, 2021
 *      Author: mica
 */

#include "../../LIB/STD_TYPES.h"
#include "I2C_Interface.h"
#include "../DIO/Memmap.h"
#include "../../LIB/BIT_Math.h"

void IIC_void_Init_Master(void)
{

	//TWBR  = ((F_CPU / 100000) � 16) / (2 * Prescaler)
//TWPS=0,TWBR=50  BITRATE= 100K OSC=8M
	TWBR = 32;
	//twps 0
	CLRBIT(TWSR, TWPS);
	CLRBIT(TWSR, 0);

	//ENABLE TWI ,DISABLE INTERRUPT
	SETBIT(TWCR,2);
	CLRBIT(TWCR,0);

	//diable globale calling
	TWAR|=(0<<0);
}

void IIC_void_Init_Slave(void)
{

	//ENABLE TWI ,DISABLE INTERRUPT
	SETBIT(TWCR,2);
	CLRBIT(TWCR,0);


	//set slave address &&diable globale calling
		TWAR=0b01111110;
	}
void IIC_void_Start (void)
{
	//clear flag //dont care//set start//clear stop//dont care//enable twi//0reserved//dontcare
	TWCR=0b10100100;
	//CHECK FLAG
	while(GETBIT(TWCR,7)==0);

}
void IIC_void_Stop(void)
{
	//clear flag//dont care//clear start//set sTOP//dontcare//enable twi//0reserved//dont care
	TWCR=0b10010100;

}
void IIC_void_Write(u8 data)
{
	//load data into register
	TWDR=data;

//clear flag //dontcare//clear start//clear sTOP//dontcare//enable twi//0reserved//dontcare
	TWCR=0b10000100;
	while(GETBIT(TWCR,7)==0);
}
u8 IIC_u8_ReadAck(void)
{
	//clear flag //enable ack//clear start//clear stop//dontcare//enable twi//0reserved//dontcare
	TWCR=0b11000100;
	while(GETBIT(TWCR,7)==0);
	return TWDR;
}
u8 IIC_u8_ReadNAck(void)
{

	//clear flag //disable ack//clear start//clear stop//dontcare//enable twi//0reserved//dontcare

	TWCR=0b10000100;
	while(GETBIT(TWCR,7)==0);
	return TWDR;
}

u8 IIC_u8_ReadStatus(void)
{

	u8 status=0;
	status=TWSR & 0XF8;
	return status;
}

