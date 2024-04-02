/*
 * DIO.h
 *
 *  Created on: Mar 30, 2024
 *      Author: musta
 */

#ifndef INC_DIO_H_
#define INC_DIO_H_

#include "STM32_F103C6.h"
#include "STM32F103C6_GPIO_DRIVERS.h"


#define Dio_ChannelType uint8_t

typedef enum {
    DIO_LEVEL_LOW = 0,   // Represents low level
    DIO_LEVEL_HIGH = 1   // Represents high level
} Dio_LevelType;

#define DIO_Door GPIO_PIN_3
#define DIO_Led  GPIO_PIN_7
#define GPIO_Port_Used GPIOA

Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId);
void Dio_WriteChannel (Dio_ChannelType ChannelId,Dio_LevelType Level);



#endif /* INC_DIO_H_ */
