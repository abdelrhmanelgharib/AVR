/*
 *  Author: El-Gharib
 *  Created on: 2/2/2021
 */

#include "../LIB/STD_Types.h"     
#include "../LIB/Bit_Math.h"
#include "../MCAL/DIO_int.h"
#include "SEVSEG_priv.h"
#include "SEVSEG_config.h"
#include "SEVSEG_int.h"



void SEVSEG_voidInitilize(void)
{

}
void SEVSEG_voidDisplay(u8 seg_num, u8 num_to_diplay)
{
    if ( (seg_num == SEG0)  && (num_to_diplay==0))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG0_a_PIN,HIGH);
            DIO_voidSetPin(SEG0_b_PIN,HIGH);
            DIO_voidSetPin(SEG0_c_PIN,HIGH);
            DIO_voidSetPin(SEG0_d_PIN,HIGH);
            DIO_voidSetPin(SEG0_e_PIN,HIGH);
            DIO_voidSetPin(SEG0_f_PIN,HIGH);
            DIO_voidSetPin(SEG0_g_PIN,LOW);
            
        }
        #else
        {
            DIO_voidSetPin(SEG0_a_PIN,LOW);
            DIO_voidSetPin(SEG0_b_PIN,LOW);
            DIO_voidSetPin(SEG0_c_PIN,LOW);
            DIO_voidSetPin(SEG0_d_PIN,LOW);
            DIO_voidSetPin(SEG0_e_PIN,LOW);
            DIO_voidSetPin(SEG0_f_PIN,LOW);
            DIO_voidSetPin(SEG0_g_PIN,HIGH);
            
        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==1))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG0_a_PIN,LOW);
            DIO_voidSetPin(SEG0_b_PIN,HIGH);
            DIO_voidSetPin(SEG0_c_PIN,HIGH);
            DIO_voidSetPin(SEG0_d_PIN,LOW);
            DIO_voidSetPin(SEG0_e_PIN,LOW);
            DIO_voidSetPin(SEG0_f_PIN,LOW);
            DIO_voidSetPin(SEG0_g_PIN,LOW);
            
        }
        #else
        {
            DIO_voidSetPin(SEG0_a_PIN,HIGH);
            DIO_voidSetPin(SEG0_b_PIN,LOW);
            DIO_voidSetPin(SEG0_c_PIN,LOW);
            DIO_voidSetPin(SEG0_d_PIN,HIGH);
            DIO_voidSetPin(SEG0_e_PIN,HIGH);
            DIO_voidSetPin(SEG0_f_PIN,HIGH);
            DIO_voidSetPin(SEG0_g_PIN,HIGH);
        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==2))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG0_a_PIN,HIGH);
            DIO_voidSetPin(SEG0_b_PIN,HIGH);
            DIO_voidSetPin(SEG0_c_PIN,LOW);
            DIO_voidSetPin(SEG0_d_PIN,HIGH);
            DIO_voidSetPin(SEG0_e_PIN,HIGH);
            DIO_voidSetPin(SEG0_f_PIN,LOW);
            DIO_voidSetPin(SEG0_g_PIN,HIGH);
            
        }
        #else
        {
            DIO_voidSetPin(SEG0_a_PIN,LOW);
            DIO_voidSetPin(SEG0_b_PIN,LOW);
            DIO_voidSetPin(SEG0_c_PIN,HIGH);
            DIO_voidSetPin(SEG0_d_PIN,LOW);
            DIO_voidSetPin(SEG0_e_PIN,LOW);
            DIO_voidSetPin(SEG0_f_PIN,HIGH);
            DIO_voidSetPin(SEG0_g_PIN,LOW);
        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==3))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG0_a_PIN,HIGH);
            DIO_voidSetPin(SEG0_b_PIN,HIGH);
            DIO_voidSetPin(SEG0_c_PIN,HIGH);
            DIO_voidSetPin(SEG0_d_PIN,HIGH);
            DIO_voidSetPin(SEG0_e_PIN,LOW);
            DIO_voidSetPin(SEG0_f_PIN,LOW);
            DIO_voidSetPin(SEG0_g_PIN,HIGH);
            
        }
        #else
        {
            DIO_voidSetPin(SEG0_a_PIN,LOW);
            DIO_voidSetPin(SEG0_b_PIN,LOW);
            DIO_voidSetPin(SEG0_c_PIN,LOW);
            DIO_voidSetPin(SEG0_d_PIN,LOW);
            DIO_voidSetPin(SEG0_e_PIN,HIGH);
            DIO_voidSetPin(SEG0_f_PIN,HIGH);
            DIO_voidSetPin(SEG0_g_PIN,LOW);
            
        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==4))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG0_a_PIN,LOW);
            DIO_voidSetPin(SEG0_b_PIN,HIGH);
            DIO_voidSetPin(SEG0_c_PIN,HIGH);
            DIO_voidSetPin(SEG0_d_PIN,LOW);
            DIO_voidSetPin(SEG0_e_PIN,LOW);
            DIO_voidSetPin(SEG0_f_PIN,HIGH);
            DIO_voidSetPin(SEG0_g_PIN,HIGH);
            
        }
        #else
        {
            DIO_voidSetPin(SEG0_a_PIN,HIGH);
            DIO_voidSetPin(SEG0_b_PIN,LOW);
            DIO_voidSetPin(SEG0_c_PIN,LOW);
            DIO_voidSetPin(SEG0_d_PIN,HIGH);
            DIO_voidSetPin(SEG0_e_PIN,HIGH);
            DIO_voidSetPin(SEG0_f_PIN,LOW);
            DIO_voidSetPin(SEG0_g_PIN,LOW);
        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==5))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG0_a_PIN,HIGH);
            DIO_voidSetPin(SEG0_b_PIN,LOW);
            DIO_voidSetPin(SEG0_c_PIN,HIGH);
            DIO_voidSetPin(SEG0_d_PIN,HIGH);
            DIO_voidSetPin(SEG0_e_PIN,LOW);
            DIO_voidSetPin(SEG0_f_PIN,HIGH);
            DIO_voidSetPin(SEG0_g_PIN,HIGH);
            
        }
        #else
        {
            DIO_voidSetPin(SEG0_a_PIN,LOW);
            DIO_voidSetPin(SEG0_b_PIN,HIGH);
            DIO_voidSetPin(SEG0_c_PIN,LOW);
            DIO_voidSetPin(SEG0_d_PIN,LOW);
            DIO_voidSetPin(SEG0_e_PIN,HIGH);
            DIO_voidSetPin(SEG0_f_PIN,LOW);
            DIO_voidSetPin(SEG0_g_PIN,LOW);

        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==6))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG0_a_PIN,HIGH);
            DIO_voidSetPin(SEG0_b_PIN,LOW);
            DIO_voidSetPin(SEG0_c_PIN,HIGH);
            DIO_voidSetPin(SEG0_d_PIN,HIGH);
            DIO_voidSetPin(SEG0_e_PIN,HIGH);
            DIO_voidSetPin(SEG0_f_PIN,HIGH);
            DIO_voidSetPin(SEG0_g_PIN,HIGH);

            
        }
        #else
        {
            DIO_voidSetPin(SEG0_a_PIN,LOW);
            DIO_voidSetPin(SEG0_b_PIN,HIGH);
            DIO_voidSetPin(SEG0_c_PIN,LOW);
            DIO_voidSetPin(SEG0_d_PIN,LOW);
            DIO_voidSetPin(SEG0_e_PIN,LOW);
            DIO_voidSetPin(SEG0_f_PIN,LOW);
            DIO_voidSetPin(SEG0_g_PIN,LOW);

        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==7))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG0_a_PIN,HIGH);
            DIO_voidSetPin(SEG0_b_PIN,HIGH);
            DIO_voidSetPin(SEG0_c_PIN,HIGH);
            DIO_voidSetPin(SEG0_d_PIN,LOW);
            DIO_voidSetPin(SEG0_e_PIN,LOW);
            DIO_voidSetPin(SEG0_f_PIN,LOW);
            DIO_voidSetPin(SEG0_g_PIN,LOW);

            
        }
        #else
        {
            DIO_voidSetPin(SEG0_a_PIN,LOW);
            DIO_voidSetPin(SEG0_b_PIN,LOW);
            DIO_voidSetPin(SEG0_c_PIN,LOW);
            DIO_voidSetPin(SEG0_d_PIN,HIGH);
            DIO_voidSetPin(SEG0_e_PIN,HIGH);
            DIO_voidSetPin(SEG0_f_PIN,HIGH);
            DIO_voidSetPin(SEG0_g_PIN,HIGH);

        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==8))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG0_a_PIN,HIGH);
            DIO_voidSetPin(SEG0_b_PIN,HIGH);
            DIO_voidSetPin(SEG0_c_PIN,HIGH);
            DIO_voidSetPin(SEG0_d_PIN,HIGH);
            DIO_voidSetPin(SEG0_e_PIN,HIGH);
            DIO_voidSetPin(SEG0_f_PIN,HIGH);
            DIO_voidSetPin(SEG0_g_PIN,HIGH);

            
        }
        #else
        {
            DIO_voidSetPin(SEG0_a_PIN,LOW);
            DIO_voidSetPin(SEG0_b_PIN,LOW);
            DIO_voidSetPin(SEG0_c_PIN,LOW);
            DIO_voidSetPin(SEG0_d_PIN,LOW);
            DIO_voidSetPin(SEG0_e_PIN,LOW);
            DIO_voidSetPin(SEG0_f_PIN,LOW);
            DIO_voidSetPin(SEG0_g_PIN,LOW);
        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==9))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG0_a_PIN,HIGH);
            DIO_voidSetPin(SEG0_b_PIN,HIGH);
            DIO_voidSetPin(SEG0_c_PIN,HIGH);
            DIO_voidSetPin(SEG0_d_PIN,HIGH);
            DIO_voidSetPin(SEG0_e_PIN,LOW);
            DIO_voidSetPin(SEG0_f_PIN,HIGH);
            DIO_voidSetPin(SEG0_g_PIN,HIGH);

            
        }
        #else
        {
            DIO_voidSetPin(SEG0_a_PIN,LOW);
            DIO_voidSetPin(SEG0_b_PIN,LOW);
            DIO_voidSetPin(SEG0_c_PIN,LOW);
            DIO_voidSetPin(SEG0_d_PIN,LOW);
            DIO_voidSetPin(SEG0_e_PIN,HIGH);
            DIO_voidSetPin(SEG0_f_PIN,LOW);
            DIO_voidSetPin(SEG0_g_PIN,LOW);

        }
        #endif
    }


    /******************************************************************************************/
    

if ( (seg_num == SEG1)  && (num_to_diplay==0))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG1_a_PIN,HIGH);
            DIO_voidSetPin(SEG1_b_PIN,HIGH);
            DIO_voidSetPin(SEG1_c_PIN,HIGH);
            DIO_voidSetPin(SEG1_d_PIN,HIGH);
            DIO_voidSetPin(SEG1_e_PIN,HIGH);
            DIO_voidSetPin(SEG1_f_PIN,HIGH);
            DIO_voidSetPin(SEG1_g_PIN,LOW);

            
        }
        #else
        {
            DIO_voidSetPin(SEG1_a_PIN,LOW);
            DIO_voidSetPin(SEG1_b_PIN,LOW);
            DIO_voidSetPin(SEG1_c_PIN,LOW);
            DIO_voidSetPin(SEG1_d_PIN,LOW);
            DIO_voidSetPin(SEG1_e_PIN,LOW);
            DIO_voidSetPin(SEG1_f_PIN,LOW);
            DIO_voidSetPin(SEG1_g_PIN,HIGH);

        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==1))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG1_a_PIN,LOW);
            DIO_voidSetPin(SEG1_b_PIN,HIGH);
            DIO_voidSetPin(SEG1_c_PIN,HIGH);
            DIO_voidSetPin(SEG1_d_PIN,LOW);
            DIO_voidSetPin(SEG1_e_PIN,LOW);
            DIO_voidSetPin(SEG1_f_PIN,LOW);
            DIO_voidSetPin(SEG1_g_PIN,LOW);

            
        }
        #else
        {
            DIO_voidSetPin(SEG1_a_PIN,HIGH);
            DIO_voidSetPin(SEG1_b_PIN,LOW);
            DIO_voidSetPin(SEG1_c_PIN,LOW);
            DIO_voidSetPin(SEG1_d_PIN,HIGH);
            DIO_voidSetPin(SEG1_e_PIN,HIGH);
            DIO_voidSetPin(SEG1_f_PIN,HIGH);
            DIO_voidSetPin(SEG1_g_PIN,HIGH);

        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==2))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG1_a_PIN,HIGH);
            DIO_voidSetPin(SEG1_b_PIN,HIGH);
            DIO_voidSetPin(SEG1_c_PIN,LOW);
            DIO_voidSetPin(SEG1_d_PIN,HIGH);
            DIO_voidSetPin(SEG1_e_PIN,HIGH);
            DIO_voidSetPin(SEG1_f_PIN,LOW);
            DIO_voidSetPin(SEG1_g_PIN,HIGH);

            
        }
        #else
        {
            DIO_voidSetPin(SEG1_a_PIN,LOW);
            DIO_voidSetPin(SEG1_b_PIN,LOW);
            DIO_voidSetPin(SEG1_c_PIN,HIGH);
            DIO_voidSetPin(SEG1_d_PIN,LOW);
            DIO_voidSetPin(SEG1_e_PIN,LOW);
            DIO_voidSetPin(SEG1_f_PIN,HIGH);
            DIO_voidSetPin(SEG1_g_PIN,LOW);

        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==3))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG1_a_PIN,HIGH);
            DIO_voidSetPin(SEG1_b_PIN,HIGH);
            DIO_voidSetPin(SEG1_c_PIN,HIGH);
            DIO_voidSetPin(SEG1_d_PIN,HIGH);
            DIO_voidSetPin(SEG1_e_PIN,LOW);
            DIO_voidSetPin(SEG1_f_PIN,LOW);
            DIO_voidSetPin(SEG1_g_PIN,HIGH);

            
        }
        #else
        {
            DIO_voidSetPin(SEG1_a_PIN,LOW);
            DIO_voidSetPin(SEG1_b_PIN,LOW);
            DIO_voidSetPin(SEG1_c_PIN,LOW);
            DIO_voidSetPin(SEG1_d_PIN,LOW);
            DIO_voidSetPin(SEG1_e_PIN,HIGH);
            DIO_voidSetPin(SEG1_f_PIN,HIGH);
            DIO_voidSetPin(SEG1_g_PIN,LOW);

        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==4))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG1_a_PIN,LOW);
            DIO_voidSetPin(SEG1_b_PIN,HIGH);
            DIO_voidSetPin(SEG1_c_PIN,HIGH);
            DIO_voidSetPin(SEG1_d_PIN,LOW);
            DIO_voidSetPin(SEG1_e_PIN,LOW);
            DIO_voidSetPin(SEG1_f_PIN,HIGH);
            DIO_voidSetPin(SEG1_g_PIN,HIGH);
            
        }
        #else
        {
            DIO_voidSetPin(SEG1_a_PIN,HIGH);
            DIO_voidSetPin(SEG1_b_PIN,LOW);
            DIO_voidSetPin(SEG1_c_PIN,LOW);
            DIO_voidSetPin(SEG1_d_PIN,HIGH);
            DIO_voidSetPin(SEG1_e_PIN,HIGH);
            DIO_voidSetPin(SEG1_f_PIN,LOW);
            DIO_voidSetPin(SEG1_g_PIN,LOW);
        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==5))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG1_a_PIN,HIGH);
            DIO_voidSetPin(SEG1_b_PIN,LOW);
            DIO_voidSetPin(SEG1_c_PIN,HIGH);
            DIO_voidSetPin(SEG1_d_PIN,HIGH);
            DIO_voidSetPin(SEG1_e_PIN,LOW);
            DIO_voidSetPin(SEG1_f_PIN,HIGH);
            DIO_voidSetPin(SEG1_g_PIN,HIGH);
            
        }
        #else
        {
            DIO_voidSetPin(SEG1_a_PIN,LOW);
            DIO_voidSetPin(SEG1_b_PIN,HIGH);
            DIO_voidSetPin(SEG1_c_PIN,LOW);
            DIO_voidSetPin(SEG1_d_PIN,LOW);
            DIO_voidSetPin(SEG1_e_PIN,HIGH);
            DIO_voidSetPin(SEG1_f_PIN,LOW);
            DIO_voidSetPin(SEG1_g_PIN,LOW);
        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==6))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG1_a_PIN,HIGH);
            DIO_voidSetPin(SEG1_b_PIN,LOW);
            DIO_voidSetPin(SEG1_c_PIN,HIGH);
            DIO_voidSetPin(SEG1_d_PIN,HIGH);
            DIO_voidSetPin(SEG1_e_PIN,HIGH);
            DIO_voidSetPin(SEG1_f_PIN,HIGH);
            DIO_voidSetPin(SEG1_g_PIN,HIGH);
            
        }
        #else
        {
            DIO_voidSetPin(SEG1_a_PIN,LOW);
            DIO_voidSetPin(SEG1_b_PIN,HIGH);
            DIO_voidSetPin(SEG1_c_PIN,LOW);
            DIO_voidSetPin(SEG1_d_PIN,LOW);
            DIO_voidSetPin(SEG1_e_PIN,LOW);
            DIO_voidSetPin(SEG1_f_PIN,LOW);
            DIO_voidSetPin(SEG1_g_PIN,LOW);
        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==7))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            DIO_voidSetPin(SEG1_a_PIN,HIGH);
            DIO_voidSetPin(SEG1_b_PIN,HIGH);
            DIO_voidSetPin(SEG1_c_PIN,HIGH);
            DIO_voidSetPin(SEG1_d_PIN,LOW);
            DIO_voidSetPin(SEG1_e_PIN,LOW);
            DIO_voidSetPin(SEG1_f_PIN,LOW);
            DIO_voidSetPin(SEG1_g_PIN,LOW);
            
        }
        #else
        {
            DIO_voidSetPin(SEG1_a_PIN,LOW);
            DIO_voidSetPin(SEG1_b_PIN,LOW);
            DIO_voidSetPin(SEG1_c_PIN,LOW);
            DIO_voidSetPin(SEG1_d_PIN,HIGH);
            DIO_voidSetPin(SEG1_e_PIN,HIGH);
            DIO_voidSetPin(SEG1_f_PIN,HIGH);
            DIO_voidSetPin(SEG1_g_PIN,HIGH);
        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==8))
    {
        #if(SEG_1_CONNECTION == COM_ANODE)
        {
            DIO_voidSetPin(SEG1_a_PIN,HIGH);
            DIO_voidSetPin(SEG1_b_PIN,HIGH);
            DIO_voidSetPin(SEG1_c_PIN,HIGH);
            DIO_voidSetPin(SEG1_d_PIN,HIGH);
            DIO_voidSetPin(SEG1_e_PIN,HIGH);
            DIO_voidSetPin(SEG1_f_PIN,HIGH);
            DIO_voidSetPin(SEG1_g_PIN,HIGH);
            
        }
        #else
        {
            DIO_voidSetPin(SEG1_a_PIN,LOW);
            DIO_voidSetPin(SEG1_b_PIN,LOW);
            DIO_voidSetPin(SEG1_c_PIN,LOW);
            DIO_voidSetPin(SEG1_d_PIN,LOW);
            DIO_voidSetPin(SEG1_e_PIN,LOW);
            DIO_voidSetPin(SEG1_f_PIN,LOW);
            DIO_voidSetPin(SEG1_g_PIN,LOW);
        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==9))
    {
        #if(SEG_1_CONNECTION == COM_ANODE)
        {
            DIO_voidSetPin(SEG1_a_PIN,HIGH);
            DIO_voidSetPin(SEG1_b_PIN,HIGH);
            DIO_voidSetPin(SEG1_c_PIN,HIGH);
            DIO_voidSetPin(SEG1_d_PIN,HIGH);
            DIO_voidSetPin(SEG1_e_PIN,LOW);
            DIO_voidSetPin(SEG1_f_PIN,HIGH);
            DIO_voidSetPin(SEG1_g_PIN,HIGH);
            
        }
        #else
        {
            DIO_voidSetPin(SEG1_a_PIN,LOW);
            DIO_voidSetPin(SEG1_b_PIN,LOW);
            DIO_voidSetPin(SEG1_c_PIN,LOW);
            DIO_voidSetPin(SEG1_d_PIN,LOW);
            DIO_voidSetPin(SEG1_e_PIN,HIGH);
            DIO_voidSetPin(SEG1_f_PIN,LOW);
            DIO_voidSetPin(SEG1_g_PIN,LOW);
        }
        #endif
    }


}


void SEVSEG_voidEnable(u8 seg_num)
{
    switch (seg_num)
    {
    case SEG0:
        #if (SEG_0_CONNECTION == COM_CATHODE )
        {
            DIO_voidSetPin(SEG0_COM_PIN, HIGH);
        }
        #else
        {
            DIO_voidSetPin(SEG0_COM_PIN, LOW);
        }
        #endif
        
        break;
    case SEG1:
        #if (SEG_1_CONNECTION == COM_CATHODE)
            {
                DIO_voidSetPin(SEG1_COM_PIN, HIGH);
            }
            #else
            {
                DIO_voidSetPin(SEG1_COM_PIN, LOW);
            }
            #endif
            
            break;
    
    default:
        break;
    }
}


void SEVSEG_voidDisable(u8 seg_num)
{
switch (seg_num)
{
    case SEG0:
        #if (SEG_0_CONNECTION == COM_CATHODE )
        {
            DIO_voidSetPin(SEG0_COM_PIN, LOW);
        }
        #else
        {
            DIO_voidSetPin(SEG0_COM_PIN, HIGH);
        }
        #endif
        
        break;
    case SEG1:
        #if (SEG_1_CONNECTION == COM_CATHODE )
		{
			DIO_voidSetPin(SEG1_COM_PIN, LOW);
		}
		#else
		{
			DIO_voidSetPin(SEG1_COM_PIN, HIGH);
		}
		#endif
		break;
    
    default:
        break;
}

}
