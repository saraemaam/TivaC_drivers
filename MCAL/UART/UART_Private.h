/*
 * UART_Private.h
 *
 *  Created on: Nov 17, 2018
 *      Author: eng-magdy
 */

#ifndef MCAL_UART_UART_PRIVATE_H_
#define MCAL_UART_UART_PRIVATE_H_
/*============================================================*/
/*==========               includes                 ==========*/
/*============================================================*/
#include <UTL/STD_Types.h>


/*============================================================*/
/*==========        Registers Definitions           ==========*/
/*============================================================*/
#define SYSCTL_RCGCUART 0x400FE618

//Array of Uart CTL REGs
extern uint32 UART_CTL_REGs[8];

//Array of Uart IBRD REGs
extern uint32 UART_IBRD_REGs[8];

//Array of Uart FBRD REGs
extern uint32 UART_FBRD_REGs[8];

//Array of Uart LCRH REGs
extern uint32 UART_LCRH_REGs[8];

//Array of Uart CC REGs
extern uint32 UART_CC_REGs[8];

//Array of Uart IM REGs
extern uint32 UART_IM_REGs[8];

//Array of Uart FR REGs
extern uint32 UART_FR_REGs[8];

//Array of Uart DR REGs
extern uint32 UART_DR_REGs[8];

//Array of Uart ICR REGs
extern uint32 UART_ICR_REGs[8];



#endif /* MCAL_UART_UART_PRIVATE_H_ */
