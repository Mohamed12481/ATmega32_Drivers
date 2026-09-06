/*
*
*  <<<<<<<<<<<<<<<<<    SW_interface.h    >>>>>>>>>>>>>>>>>>>>>>>>>>
*
*   Author  : Mohamed Omar
*   lyaer   : HAL
*   SWC     : Switch
*
*/

#ifndef _SW_INTERFACE_H_
#define _SW_INTERFACE_H_

#define SW_PRESSED 0
#define SW_NOT_PRESSED 1

#define SW_Int_PULL_UP 0
#define SW_Ext_PULL_UP 1
#define SW_Ext_PULL_DOWN 2
#define SW_FLOATING 3

typedef struct 
{
    u8 Port;
    u8 Pin;
    u8 Pull_State;

} SW_Type;

void SW_voidInit (SW_Type SW_Config);
u8 SW_u8GetPressed (SW_Type SW_Config);


#endif