/*
 * DIO.c
 *
 *  Created on: Mar 30, 2024
 *      Author: musta
 */

#include "DIO.h"


Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId)
{
	Dio_LevelType ChannelVal = DIO_LEVEL_LOW;
	ChannelVal = MCAL_GPIO_Read_Pin(GPIO_Port_Used, ChannelId);
	return ChannelVal;
}


void Dio_WriteChannel(Dio_ChannelType ChannelId,Dio_LevelType Level)
{
  MCAL_GPIO_WritePin(GPIOA, ChannelId, Level);
}


