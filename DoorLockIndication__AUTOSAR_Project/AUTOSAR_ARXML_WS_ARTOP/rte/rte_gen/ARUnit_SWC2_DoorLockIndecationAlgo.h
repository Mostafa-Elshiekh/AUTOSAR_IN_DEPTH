/********************************************************************
 * Automatically generated by ARUnit
 * Filename: ARUnit_SWC2_DoorLockIndecationAlgo.h
 * Generated on: Mon Apr 1 2:20:52 EET
 ********************************************************************/

#include "Rte_SWC2_DoorLockIndecationAlgo.h"	

#ifndef ARUNIT_SWC2_DOORLOCKINDECATIONALGO_H
#define ARUNIT_SWC2_DOORLOCKINDECATIONALGO_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef false
    #define false (0)
#endif
#ifndef true
    #define true  (!false)
#endif


void ARUnit_Initialize ();

/***************************************/
/******** Delegates API  ***************/
/***************************************/
DECLSPEC_EXPORT void ARUnit_Set_SWC2_DoorLockIndecationAlgo_ReqPort_ClServInterface_Led_Led_Delegate(FunctionPtr_SWC2_DoorLockIndecationAlgo_ReqPort_ClServInterface_Led_Led );
DECLSPEC_EXPORT void ARUnit_Call_SWC2_DoorLockIndecationAlgo_ReqPort_ClServInterface_Led_Led_ReturnCode(Std_ReturnType returnCode);

/***************************************/
/******** Flags API  *******************/
/***************************************/

/***************************************/
/******** Implicit API  ****************/
/***************************************/
DECLSPEC_EXPORT void ARUnit_IWrite_SWC2_DoorLockIndecationAlgo_Run_DoorLockAlgo_ReqPort_SendRec_DoorState_DoorState(myuint8 DoorState);
DECLSPEC_EXPORT myuint8 ARUnit_IRead_SWC2_DoorLockIndecationAlgo_Run_DoorLockAlgo_ReqPort_SendRec_DoorState_DoorState(void);
DECLSPEC_EXPORT myuint8* ARUnit_IWriteRef_SWC2_DoorLockIndecationAlgo_Run_DoorLockAlgo_ReqPort_SendRec_DoorState_DoorState(void);
/***************************************/
/******** Explicit API  ****************/
/***************************************/
/***************************************/
/******** Runnable Calls****************/
/***************************************/

DECLSPEC_EXPORT void ARUnit_Trigger_SWC2_DoorLockIndecationAlgo_Run_DoorLockAlgo(void);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* ARUNIT_SWC2_DOORLOCKINDECATIONALGO_H */