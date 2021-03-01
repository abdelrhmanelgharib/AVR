/*
 * SPI_interface.h
 *
 *  Created on: Feb 21, 2021
 *      Author: Elgharib
 */

#ifndef MCAL_SPI_SPI_INTERFACE_H_
#define MCAL_SPI_SPI_INTERFACE_H_


typedef enum
{
    MASTER = 0 ,
    SLAVE ,
}Master_slave;



void SPI_voidInitialization(Master_slave Com_type);
void SPI_voidSendData(u8 data);
u8 SPI_u8RecieveData(u8 data);
u8 SPI_u8RecieveDataNoBLOCKING(u8 data);



#endif /* MCAL_SPI_SPI_INTERFACE_H_ */
