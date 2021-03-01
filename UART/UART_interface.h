/*
 *  Author: El-Gharib
 *  Created on: 20/2/2021
 */


#ifndef MCAL_UART_UART_INTERFACE_H_
#define MCAL_UART_UART_INTERFACE_H_

void UART_voidInitialization(void);
void UART_voidSendData(u8 data);
u8 UART_u8RecieveData(void);
u8 UART_u8RecieveDataNoBLOCKING(u8 * ptr_data);


#endif  /* MCAL_UART_UART_INTERFACE_H_ */
