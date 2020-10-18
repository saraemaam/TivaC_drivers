/*
 * UART_Private.c
 *
 *  Created on: Nov 17, 2018
 *      Author: 
 */
/*============================================================*/
/*==========               includes                 ==========*/
/*============================================================*/
#include <MCAL/UART/UART_Private.h>

/*============================================================*/
/*==========        Registers Definitions           ==========*/
/*============================================================*/

//Array of Uart CTL REGs
uint32 UART_CTL_REGs[8]={0x4000C030UL,
                                    0x4000D030UL,
                                    0x4000E030UL,
                                    0x4000F030UL,
                                    0x40010030UL,
                                    0x40011030UL,
                                    0x40012030UL,
                                    0x40013030UL

};

//Array of Uart IBRD REGs
uint32 UART_IBRD_REGs[8]={0x4000C024UL,
                                     0x4000D024UL,
                                     0x4000E024UL,
                                     0x4000F024UL,
                                     0x40010024UL,
                                     0x40011024UL,
                                     0x40012024UL,
                                     0x40013024UL

};

//Array of Uart FBRD REGs
uint32 UART_FBRD_REGs[8]={0x4000C028UL,
                                     0x4000D028UL,
                                     0x4000E028UL,
                                     0x4000F028UL,
                                     0x40010028UL,
                                     0x40011028UL,
                                     0x40012028UL,
                                     0x40013028UL

};

//Array of Uart LCRH REGs
uint32 UART_LCRH_REGs[8]={0x4000C02CUL,
                                     0x4000D02CUL,
                                     0x4000E02CUL,
                                     0x4000F02CUL,
                                     0x4001002CUL,
                                     0x4001102CUL,
                                     0x4001202CUL,
                                     0x4001302CUL

};

//Array of Uart CC REGs
uint32 UART_CC_REGs[8]={0x4000CFC8UL,
                                   0x4000DFC8UL,
                                   0x4000EFC8UL,
                                   0x4000FFC8UL,
                                   0x40010FC8UL,
                                   0x40011FC8UL,
                                   0x40012FC8UL,
                                   0x40013FC8UL

};

//Array of Uart IM REGs
uint32 UART_IM_REGs[8]={0x4000C038UL,
                                   0x4000D038UL,
                                   0x4000E038UL,
                                   0x4000F038UL,
                                   0x40010038UL,
                                   0x40011038UL,
                                   0x40012038UL,
                                   0x40013038UL

};

//Array of Uart FR REGs
uint32 UART_FR_REGs[8]={0x4000C018UL,
                                   0x4000D018UL,
                                   0x4000E018UL,
                                   0x4000F018UL,
                                   0x40010018UL,
                                   0x40011018UL,
                                   0x40012018UL,
                                   0x40013018UL

};

//Array of Uart DR REGs
uint32 UART_DR_REGs[8]={0x4000C000UL,
                                   0x4000D000UL,
                                   0x4000E000UL,
                                   0x4000F000UL,
                                   0x40010000UL,
                                   0x40011000UL,
                                   0x40012000UL,
                                   0x40013000UL

};

//Array of Uart ICR REGs
uint32 UART_ICR_REGs[8]={0x4000C044UL,
                                    0x4000D044UL,
                                    0x4000E044UL,
                                    0x4000F044UL,
                                    0x40010044UL,
                                    0x40011044UL,
                                    0x40012044UL,
                                    0x40013044UL

};




