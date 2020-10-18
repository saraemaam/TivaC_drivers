/*
 * TIMER_Private.h
 *
 *  Created on: Aug 19, 2020
 *      Author: 
 */

#ifndef MCAL_GPT_GPT_PRIVATE_H_
#define MCAL_GPT_GPT_PRIVATE_H_

/*============================================================*/
/*==========               includes                 ==========*/
/*============================================================*/
#include <UTL/STD_Types.h>
#include "tm4c123gh6pm.h"

/*============================================================*/
/*==========              Definitions               ==========*/
/*============================================================*/


/*============================================================*/
/*==========        Registers Definitions           ==========*/
/*============================================================*/


//Register 59: 16/32-Bit General-Purpose Timer Run Mode Clock Gating Control
#define SYSCTL_RCGCTIMER 0x400FE604UL


//Offsets of registers

//GPTM Control
#define GPTMCTL_R       0x00C
//GPTM Configuration
#define GPTMCFG_R       0x000
//GPTM Timer A Mode
#define GPTMTAMR_R      0x004
//GPTM Timer B Mode
#define GPTMTBMR_R      0x008
//GPTM Timer A Interval Load
#define GPTMTAILR_R     0x028
//GPTM Timer B Interval Load
#define GPTMTBILR_R     0x02C
//GPTM Interrupt Mask
#define GPTMIMR_R       0x018
//GPTM Interrupt Clear
#define GPTMICR_R       0x024

#endif /* MCAL_GPT_GPT_PRIVATE_H_ */
