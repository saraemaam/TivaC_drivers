/*
 * CAN_Ports.h
 *
 *  Created on: Aug 16, 2020
 *      Author: Eng.Magdy_2
 */

#ifndef MCAL_CAN_CAN_PORTS_H_
#define MCAL_CAN_CAN_PORTS_H_

typedef enum{
    Port_A = 0x40004000 ,
    Port_B = 0x40005000 ,
    Port_C = 0,
    Port_D = 0,
    Port_E = 0x40024000 ,
    Port_F = 0x40025000

}Port_Name;



#define SYSCTL_RCGC2    0x400FE108

#define CR_R            0x524

#define AMSEL_R         0x528

#define PCTL_R          0x52C

#define DIR_R           0x400

#define AFSEL_R         0x420

#define DEN_R           0x51C

#define LOCK_R          0x520




#define GPIOF      20  // Port F Clock Gating Control
#define GPIOE      10  // Port E Clock Gating Control
#define GPIOB      2  // Port B Clock Gating Control
#define GPIOA      1  // Port A Clock Gating Control


#endif /* MCAL_CAN_CAN_PORTS_H_ */
