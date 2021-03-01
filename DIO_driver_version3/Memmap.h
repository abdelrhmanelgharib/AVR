/*
 *  Author: El-Gharib
 *  Created on: 17/2/2021
 */

#ifndef MEMMAP_H_
#define MEMMAP_H_


/*******************************************************************************
 *                           DIO Registers                                     *
********************************************************************************/
#define PORTA   (*(volatile u8*) 0x3B)
#define DDRA    (*(volatile u8*) 0x3A)
#define PINA    (*(volatile u8*) 0x39)

#define PORTB   (*(volatile u8*) 0x38)
#define DDRB    (*(volatile u8*) 0x37)
#define PINB    (*(volatile u8*) 0x36)

#define PORTC   (*(volatile u8*) 0x35)
#define DDRC    (*(volatile u8*) 0x34)
#define PINC    (*(volatile u8*) 0x33)

#define PORTD   (*(volatile u8*) 0x32)
#define DDRD    (*(volatile u8*) 0x31)
#define PIND    (*(volatile u8*) 0x30)


/*******************************************************************************
 *                           TIMER0 Register                                   *
********************************************************************************/
#define TCNT0   (*(volatile u8*) 0x52)
#define TCCR0   (*(volatile u8*) 0x53)
#define FOC0    7
#define WGM00   6
#define COM01   5
#define COM00   4
#define WGM01   3
#define CS02    2
#define CS01    1
#define CS00    0

#define TIMSK   (*(volatile u8*) 0x59)
#define OCIE2   7
#define TOIE2   6
#define TICIE1  5
#define OCIE1A  4
#define OCIE1B  3
#define TOIE1   2
#define OCIE0   1
#define TOIE0   0

#define TIFR   (*(volatile u8*) 0x58)
#define OCF2   7
#define TOV2   6
#define ICF1   5
#define OCF1A  4
#define OCF1B  3
#define TOV1   2
#define OCF0   1
#define TOV0   0

#define OCR0   (*(volatile u8*) 0x5C)

#define SREG    (*(volatile u8*) 0x5F)
#define SREG_I  7

/*******************************************************************************
 *                           TIMER1 Register                                   *
********************************************************************************/
#define TCCR1A  (*(volatile u8*) 0x4F)
#define COM1A1  7
#define COM1A0  6
#define COM1B1  5
#define COM1B0  4
#define FOC1A   3
#define FOC1B   2
#define WGM11   1
#define WGM10   0

#define TCCR1B  (*(volatile u8*) 0x4E)
#define ICNC1   7
#define ICES1   6
#define WGM13   4
#define WGM12   3
#define CS12    2
#define CS11    1
#define CS10    0

#define ICR1L  (*(volatile u8*) 0x46)
#define ICR1H  (*(volatile u8*) 0x47)



/*******************************************************************************
 *                           ADC Registers                                     *
********************************************************************************/
#define ADMUX   (*(volatile u8*) 0x27)
#define ADLAR   5
#define REFS0   6
#define REFS1   7


#define ADCSRA  (*(volatile u8*) 0x26)
#define ADEN    7
#define ADSC    6
#define ADATE   5
#define ADIF    4
#define ADIE    3
#define ADPS2   2
#define ADPS1   1
#define ADPS0   0

#define ADCH    (*(volatile u8*) 0x25)
#define ADCL    (*(volatile u8*) 0x24)
#define ADC	    (*(volatile u16*)0x24)

/*******************************************************************************
 *                           UART Registers                                     *
********************************************************************************/
#define UDR       (*(volatile u8*) 0x2c)
#define UCSRA     (*(volatile u8*) 0x2B)
#define RXC        7
#define TXC        6
#define UDRE       5
#define FE         4
#define DOR        3
#define PE         2
#define U2X        1
#define MPCM       0

#define UCSRB     (*(volatile u8*) 0x2A)
#define RXCIE      7
#define TXCIE      6
#define UDRIE      5
#define RXEN       4
#define TXEN       3
#define UCSZ2      2
#define RXB8       1
#define TXB8       0

#define UBRRH     (*(volatile u8*) 0x40)
#define UCSRC     (*(volatile u8*) 0x40)
#define URSEL      7
#define UMSEL      6
#define UPM1       5
#define UPM0       4
#define USBS       3
#define UCSZ1      2
#define UCSZ0      1
#define UCPOL      0
#define UBRRL     (*(volatile u8*) 0x29)
/*******************************************************************************
 *                           SPI Registers                                     *
********************************************************************************/
#define SPCR    (*(volatile u8*) 0x2D)
#define SPIE    7
#define SPE     6
#define DORD    5
#define MSTR    4
#define CPOL    3 
#define CPHA    2
#define SPR1    1
#define SPR0    0




#define SPSR    (*(volatile u8*) 0x2E)
#define SPIF    7
#define WCOL    6
#define SPI2X   0

#define SPDR    (*(volatile u8*) 0x2F)



/*******************************************************************************
 *                           I2C Registers                                     *
********************************************************************************/
#define TWBR    (*(volatile u8*) 0x20);
#define TWSR    (*(volatile u8*) 0x21);
#define TWS7    7
#define TWS6    6
#define TWS5    5
#define TWS4    4
#define TWS3    3
#define TWPS    1
#define TWPS0   0

#define TWAR    (*(volatile u8*) 0x22);
#define TWA6    7
#define TWA5    6
#define TWA4    5
#define TWA3    4
#define TWA2    3
#define TWA1    2
#define TWA0    1
#define TWGCE   0

#define TWDR    (*(volatile u8*) 0x23);

#define TWCR    (*(volatile u8*) 0x56);
#define TWINT   7
#define TWEA    6
#define TWSTA   5
#define TWSTO   4
#define TWWC    3
#define TWEN    2
#define TWIE    0



#endif /* MEMMAP_H_ */