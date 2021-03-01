/*
 * SPI_interface.h
 *
 *  Created on: Feb 21, 2021
 *      Author: Elgharib
 */

#ifndef MCAL_SPI_SPI_INTERFACE_H_
#define MCAL_SPI_SPI_INTERFACE_H_




void SPI_InitSlave();
void SPI_InitMaster();
void SPI_ReceiveString(u8 *str);
void SPI_SendString(u8 *str);
u8 SPI_ReceiveByte();
void SPI_SendByte(u8 data);




#endif /* MCAL_SPI_SPI_INTERFACE_H_ */
