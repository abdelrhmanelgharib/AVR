/*
 *  Author: El-Gharib
 *  Created on: 1/2/2021
 */

#ifndef DIO_INT_H_
#define DIO_INT_H_




void DIO_voidInitialize(void);
void DIO_voidSetPin(u8 pin_num , u8 value);
void DIO_voidTogPin(u8 pin_num);


u8 DIO_u8GetPin(u8 pin_num);



#define HIGH 1
#define LOW  0



/*****************************/
#define  PIN0  0    /* PINA0 */
#define  PIN1  1 
#define  PIN2  2
#define  PIN3  3
#define  PIN4  4
#define  PIN5  5
#define  PIN6  6
#define  PIN7  7    /* PINA7 */
/*****************************/
#define  PIN8  8    /* PINB0 */ 
#define  PIN9  9
#define  PIN10 10
#define  PIN11 11
#define  PIN12 12
#define  PIN13 13
#define  PIN14 14   
#define  PIN15 15   /* PINB7 */
/*****************************/
#define  PIN16 16   /* PINC0 */
#define  PIN17 17
#define  PIN18 18
#define  PIN19 19
#define  PIN20 20
#define  PIN21 21
#define  PIN22 22   
#define  PIN23 23   /* PINC7 */
/*****************************/
#define  PIN24 24   /* PIND0 */
#define  PIN25 25
#define  PIN26 26
#define  PIN27 27
#define  PIN28 28
#define  PIN29 29
#define  PIN30 30
#define  PIN31 31   /* PIND7 */
/*****************************/




#endif  /* DIO_INT_H_ */