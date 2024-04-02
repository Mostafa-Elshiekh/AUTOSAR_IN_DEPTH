/*
 * SWC1_DoorLockIndecation.c
 *
 *  Created on: Mar 30, 2024
 *      Author: musta
 */

#include "Rte.h"
#include "DIO.h"
#include "Rte_Type.h"

extern Rte_DE_myuint8 Run_ReadDoorSensor_ProvPort_SendRec_DoorState_DoorState;



void Run_ReadDoorSensor(void)
{
	Dio_LevelType DoorState = DIO_LEVEL_LOW;
	DoorState = Dio_ReadChannel(DIO_Door);
	Rte_IWrite_SWC1_DoorLockIndecation_Run_ReadDoorSensor_ProvPort_SendRec_DoorState_DoorState(DoorState);
}

Std_ReturnType Run_Led(myuint8 LedState)
{
	if(LedState == DIO_LEVEL_LOW)
	{
		Dio_WriteChannel(DIO_Led, DIO_LEVEL_LOW);
		return E_OK;
	}
	else if(LedState == DIO_LEVEL_HIGH)
	{
		Dio_WriteChannel(DIO_Led, DIO_LEVEL_HIGH);
		return E_OK;
	}

	return E_NOT_OK;
}

