
#include <avr/io.h>
#include "avr/delay.h"

#include "Bit_Math.h"
#include "STD_Types.h"
#include "DIO_int.h"
#include "SEVSEG_int.h"


int main()
{
	DIO_voidInitialize();
	SEVSEG_voidInitilize();

	u8 i;

	while(1)
	{
		for(i=1; i<10; i++)
		{
			SEVSEG_voidDisplay(SEG0, i);
			_delay_ms(1000);
    	}

	
		for (i=0; i<15*5; i++)
		{
			SEVSEG_voidDisable(SEG1);
			SEVSEG_voidDisplay(SEG0, 0);
			SEVSEG_voidEnable(SEG0);
			_delay_ms(10);

			/* Disable seg0 and enable seg1 */
			SEVSEG_voidDisable(SEG0);
			
			SEVSEG_voidDisplay(SEG1, 1);
			SEVSEG_voidEnable(SEG1);

			_delay_ms(10);
   		}


	}
	return 0;
}

