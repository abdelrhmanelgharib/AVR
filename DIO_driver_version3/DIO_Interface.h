/*
 *  Author: El-Gharib
 *  Created on: 17/2/2021
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

typedef enum
{
    PORTA_ID = 0,
    PORTB_ID ,
    PORTC_ID ,
    PORTD_ID

}port_num;

typedef enum
{
    PIN0 = 0,
    PIN1 ,
    PIN2 ,
    PIN3 ,
    PIN4 ,
    PIN5 ,
    PIN6 ,
    PIN7
}pin_num;

typedef enum
{
    INPUT = 0 ,
    OUTPUT
}direction_type;

typedef enum
{
    LOW = 0 ,
    HIGH
}value_type;


void DIO_voidSetPinValue(port_num Port, pin_num Pin, value_type Value);
void DIO_voidSetPinDirection(port_num port, pin_num Pin, direction_type Direction);
value_type DIO_u8GetPinValue(port_num Port, pin_num Pin);

void DIO_voidTogPin(port_num Port, pin_num Pin);

void DIO_voidSetPortDirection(port_num Port, u8 Direction);
void DIO_voidSetPortValue(port_num Port, u8 Value);


#endif /* DIO_INTERFACE_H_ */
