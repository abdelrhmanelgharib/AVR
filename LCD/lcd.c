
#include <util/delay.h>

#include "lcd.h"

void LCD_Command( u8 command ){
    DATAPORT = command;
    Set_PinValue( RS_PORT, RS_PIN, LOW);
    Set_PinValue( RW_PORT, RW_PIN, LOW);
    Set_PinValue( EN_PORT, EN_PIN, HIGH);   // test
    _delay_us(1);
    Set_PinValue( EN_PORT, EN_PIN, LOW);
    _delay_us(3);
}

void LCD_SendChar( u8 char_data ){
    DATAPORT = char_data;
    Set_PinValue( RS_PORT, RS_PIN, HIGH);
    Set_PinValue( RW_PORT, RW_PIN, LOW);
    Set_PinValue( EN_PORT, EN_PIN, HIGH);
    _delay_us(1);
    Set_PinValue( EN_PORT, EN_PIN, LOW);
    _delay_ms(1);
}

void LCD_Init(void)
{
    // set data port as output 
    Set_PortDirection( DATA_PORT, 0xFF );
    Set_PinDirection ( EN_PORT, EN_PIN, OUTPUT);
    Set_PinDirection ( RS_PORT, RS_PIN, OUTPUT);
    Set_PinDirection ( RW_PORT, RW_PIN, OUTPUT);
    _delay_ms(20);
    LCD_Command( TWO_LINE_MODE );
    LCD_Command( Cursor_on );
    LCD_Command ( auto_increment );
    LCD_Command ( CLR_Display );
    LCD_Command ( Cursor_home );

}

void LCD_SENDSTR(s8* str){
	s8 i=0 ;
	while(str[i]!='/0')
	{
		LCD_SendChar(str[i]);
		i++;
	}
}