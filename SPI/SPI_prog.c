/*
 *  Author: El-Gharib
 *  Created on: 21/2/2021
 */


#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_Math.h"
#include "SPI_interface.h"

#include "../../MCAL/DIO/Memmap.h"

void SPI_voidInitialization(Master_slave com_type)
{
    /*SPI Enable */
    SETBIT(SPCR, SPE);

    /* LSB transmit first */
    SETBIT(SPCR, DORD);

    /* Select communication */
    switch (com_type)
    {
    case MASTER:
        SETBIT(SPCR, MSTR);
        break;
    case SLAVE:
        CLRBIT(SPCR, MSTR);
        break;
    }

    /* Clock Polarity when Falling */
    SETBIT(SPCR, CPOL);

    /* Clock Phase */
    CLRBIT(SPCR, CPHA);

    /* CLK  */
    SETBIT(SPCR, SPI2X);
    CLRBIT(SPCR, SPR0);
    CLRBIT(SPCR, SPR1);

}


void SPI_voidSendData(u8 data)
{
    while ((GETBIT(SPSR, SPIF)));
    SPDR = data;
}



u8 SPI_u8RecieveData(u8 data)
{
    while (!(GETBIT(SPSR, SPIF)));
    return SPDR;
}



u8 SPI_u8RecieveDataNoBLOCKING(u8 data)
{

}
