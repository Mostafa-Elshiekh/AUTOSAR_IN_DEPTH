/********************************************************************
 * Automatically generated by ARUnit
 * Filename: ARUnit_SWC1_DoorLockIndecation_.c
 * Generated on: Mon Apr 1 2:20:52 EET
 ********************************************************************/

#include "string.h"
#include "ARUnit_SWC1_DoorLockIndecation.h"


extern const Rte_CDS_SWC1_DoorLockIndecation Rte_Instance_SWC1_DoorLockIndecation;
extern const Rte_CDS_SWC1_DoorLockIndecation * const Rte_Inst_SWC1_DoorLockIndecation;




DECLSPEC_EXPORT void ARUnit_IWrite_SWC1_DoorLockIndecation_Run_ReadDoorSensor_ProvPort_SendRec_DoorState_DoorState(myuint8 DoorState)
{
		(Rte_Inst_SWC1_DoorLockIndecation)->Run_ReadDoorSensor_ProvPort_SendRec_DoorState_DoorState->value = DoorState;
}
DECLSPEC_EXPORT myuint8* ARUnit_IWriteRef_SWC1_DoorLockIndecation_Run_ReadDoorSensor_ProvPort_SendRec_DoorState_DoorState(void)
{
	return &(Rte_Inst_SWC1_DoorLockIndecation)->Run_ReadDoorSensor_ProvPort_SendRec_DoorState_DoorState->value;
}
DECLSPEC_EXPORT myuint8 ARUnit_IRead_SWC1_DoorLockIndecation_Run_ReadDoorSensor_ProvPort_SendRec_DoorState_DoorState(void)
{
	return (Rte_Inst_SWC1_DoorLockIndecation)->Run_ReadDoorSensor_ProvPort_SendRec_DoorState_DoorState->value;
}
DECLSPEC_EXPORT Std_ReturnType ARUnit_Trigger_SWC1_DoorLockIndecation_Run_Led(myuint8 LedState)
{
	return Run_Led(LedState);
}


DECLSPEC_EXPORT void ARUnit_Trigger_SWC1_DoorLockIndecation_Run_ReadDoorSensor(void)
{
	Run_ReadDoorSensor();
}