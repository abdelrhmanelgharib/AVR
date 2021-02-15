/*
 *  Author: El-Gharib
 *  Created on: 7/2/2021
 */

#include "../../UTIL/STD_Types.h"
#include "../../UTIL/BIT_Math.h"

#include "REG.h"
#include "EXTI_config.h"
#include "EXTI_interface.h"



void EXTI_voidInit(u8 Int_Type)
{
    switch (Int_Type)
    {
    case INT0:
        /* INT0 is input(done) */

        /* Enable peripheral interrupt enable */
        SETBIT(GICR, INT0);

        /* Global interrupt enable */
        SETBIT(SREG, I_BIT);
       /* EXTI_voidINT0 */
        break;
    
    case INT1:
        /* INT1 is input(done) */

        /* Enable peripheral interrupt enable */
        SETBIT(GICR, INT1);

        /* Global interrupt enable */
        SETBIT(SREG, I_BIT);
        break;
        
    case INT2:
        /* INT2 is input(done) */

        /* Enable peripheral interrupt enable */
        SETBIT(GICR, INT2);

        /* Global interrupt enable */
        SETBIT(SREG, I_BIT);
        break;
    
    default:
        break;
    }
}



/* change mode of falling- rising- low- logical change */
void EXTI_voidChangeMode(ext_mode_type mode, interrput_pin pin)
{
    switch (pin)
    {
        case INT0:
            switch (mode)
            {
            case EXT_LOW_MODE:
                CLRBIT(MCUCR, ISC00);
                CLRBIT(MCUCR, ISC01);
                break;

            case EXT_RAISING_MODE:
                SETBIT(MCUCR, ISC00);
                SETBIT(MCUCR, ISC01);
                break;

            case EXT_FAILLING_MODE:
                CLRBIT(MCUCR, ISC00);
                SETBIT(MCUCR, ISC01);
                break;
                
            case EXT_ANY_CHANGE_MODE:
                SETBIT(MCUCR, ISC00);
                CLRBIT(MCUCR, ISC01);
                break;

            default:
                break;
            }
        break;
            
        case INT1:
            switch (mode)
            {
            case EXT_LOW_MODE:
                CLRBIT(MCUCR, ISC10);
                CLRBIT(MCUCR, ISC11);
                break;

            case EXT_RAISING_MODE:
                SETBIT(MCUCR, ISC10);
                SETBIT(MCUCR, ISC11);
                break;

            case EXT_FAILLING_MODE:
                CLRBIT(MCUCR, ISC10);
                SETBIT(MCUCR, ISC11);
                break;
                
            case EXT_ANY_CHANGE_MODE:
                SETBIT(MCUCR, ISC10);
                CLRBIT(MCUCR, ISC11);
                break;

            default:
                break;
            }
        break;
        
        case INT2:
            switch (mode)
            {
            case EXT_RAISING_MODE:
                SETBIT(MCUCR, ISC10);
                SETBIT(MCUCR, ISC11);
                break;

            case EXT_FAILLING_MODE:
                CLRBIT(MCUCR, ISC10);
                SETBIT(MCUCR, ISC11);
                break;

            default:
                /* ERROR */
                break;
            }
        break;

    
    default:
        break;
    }

}   /* EXTI_voidChangeMode */

