  /*
 *  Author: El-Gharib
 *  Created on: 20/2/2021
 */
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_Math.h"
#include "../../MCAL/DIO/DIO_Interface.h"

#include "../../MCAL/DIO/Memmap.h"

void UART_voidInitialization(void)
{
    /* UART Double Speed */
    SETBIT(UCSRA, U2X);

    /* UART Reciever Enable */
    SETBIT(UCSRB, RXEN);

    /* UART Transmit Enable */
    SETBIT(UCSRB, TXCIE);

    /* UART Asynchromous */
    CLRBIT(UCSRC, UMSEL);

    /* no parity mode */
    CLRBIT(UCSRC, UPM0);
    CLRBIT(UCSRC, UPM1);

    /* 1 stop bit */
    CLRBIT(UCSRC, USBS);

    /* 8 bits data in fram */
    SETBIT(UCSRC, UCSZ0);
    SETBIT(UCSRC, UCSZ1);
    SETBIT(UCSRB, UCSZ2);

    /* boud rate =9600 .... fosc = 16MHZ */
    UBRRH = 0;
    UBRRL = 207;
}   /* UART_voidInitialization */

void UART_voidSendData(u8 data)
{
    while (!(GETBIT(UCSRA, UDRE)));
    UDR = data;

}   /* UART_voidSendData */


u8 UART_u8RecieveData(void)
{
    /* block system */
    while (!(GETBIT(UCSRA, RXC)));
    return UDR;   

}   /* UART_voidRecieveData */

u8 UART_u8RecieveDataNoBLOCKING(u8* ptr_data)
{
    u8 status = 0;
    if (GETBIT(UCSRA, RXC))
    {
        *ptr_data =UDR;
        status =1;
    }
    else
    {
        /* do nothing */
    }
    return status;
}
