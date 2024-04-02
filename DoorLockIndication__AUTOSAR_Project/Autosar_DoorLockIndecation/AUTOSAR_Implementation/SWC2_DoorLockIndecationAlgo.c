/*
 * SWC2_DoorLockIndecationAlgo.c
 *
 *  Created on: Mar 30, 2024
 *      Author: musta
 */

#include "Rte.h"
#include "Rte_SWC2_DoorLockIndecationAlgo.h"
#include "DIO.h"


void Run_DoorLockAlgo(void)
{
	Dio_LevelType DoorState = DIO_LEVEL_LOW;
	//Read DoorState from RTE sender receiver interface
	DoorState=Rte_IRead_SWC2_DoorLockIndecationAlgo_Run_DoorLockAlgo_ReqPort_SendRec_DoorState_DoorState();

	if(DoorState == DIO_LEVEL_HIGH)
	{
		//door is open
		Rte_Call_SWC2_DoorLockIndecationAlgo_ReqPort_ClServInterface_Led_Led(DIO_LEVEL_LOW);//active low
	}
	else
	{
		//door is closed
		Rte_Call_SWC2_DoorLockIndecationAlgo_ReqPort_ClServInterface_Led_Led(DIO_LEVEL_HIGH);//active high
	}
}



