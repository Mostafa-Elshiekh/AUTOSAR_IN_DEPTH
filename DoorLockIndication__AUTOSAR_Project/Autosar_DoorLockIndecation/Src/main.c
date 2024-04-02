/******************************************************************************
 * @file           : main.c
 * @author         : Mostafa Elshiekh
 * @brief          : DoorLockIndication_AUTOSAR_Project
 ******************************************************************************/
#include "DIO.h"
#include "STM32F103C6_GPIO_DRIVERS.h"
#include "Timer.h"

#include "FreeRTOS.h"
#include "task.h"
#include "FreeRTOSConfig.h"


/*================TASKS HANDELS=================*/
TaskHandle_t xTask_Run_ReadDoorSensor_Handle = NULL;
TaskHandle_t xTask_Run_DoorLockAlgo_Handle = NULL;
/*==============================================*/


/*============Tasks Prototype===========*/
void Task_Run_ReadDoorSensor(void* params);
void Task_Run_DoorLockAlgo(void* params);
/*=====================================*/



void MCU_HW_Init(void)
{
	Timer2_init();

	RCC_GPIOA_CLOCK_EN();
	GPIO_Pin_Configure_t DIO_DoorConfig;
	DIO_DoorConfig.GPIO_Pin_Number=DIO_Door;
	DIO_DoorConfig.GPIO_MODE = GPIO_MODE_INPUT_FLO;
	MCAL_GPIO_Init(GPIO_Port_Used, &DIO_DoorConfig);

	GPIO_Pin_Configure_t DIO_LedConfig;
	DIO_LedConfig.GPIO_Pin_Number=DIO_Led;
	DIO_LedConfig.GPIO_MODE = GPIO_MODE_OUTPUT_PP;
	MCAL_GPIO_Init(GPIO_Port_Used, &DIO_LedConfig);
}

int main(void)
{
	MCU_HW_Init();

	xTaskCreate(Task_Run_ReadDoorSensor, "Task_Run_ReadDoorSensor", 128, NULL, 1, xTask_Run_ReadDoorSensor_Handle);
	xTaskCreate(Task_Run_DoorLockAlgo, "Task_Run_DoorLockAlgo", 128, NULL, 2, xTask_Run_DoorLockAlgo_Handle);

	vTaskStartScheduler();
	while(1)
	{

	}
	return 0;
}


/*============Tasks Definitions===========*/
void Task_Run_ReadDoorSensor(void* params)
{
	while(1)
	{
		Run_ReadDoorSensor();
		vTaskDelay(10);
	}
}
void Task_Run_DoorLockAlgo(void* params)
{
	while(1)
	{
		Run_DoorLockAlgo();
		vTaskDelay(12);
	}
}
/*=====================================*/


