################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../FreeRTOS/portable/MemMang/heap_4.c 

OBJS += \
./FreeRTOS/portable/MemMang/heap_4.o 

C_DEPS += \
./FreeRTOS/portable/MemMang/heap_4.d 


# Each subdirectory must supply rules for building sources it contributes
FreeRTOS/portable/MemMang/heap_4.o: ../FreeRTOS/portable/MemMang/heap_4.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"E:/study/StmCubeIdeProject/Autosar_DoorLockIndecation/AUTOSAR_Implementation/RTE_Generation" -I"E:/study/StmCubeIdeProject/Autosar_DoorLockIndecation/AUTOSAR_Implementation/AutosarIncludeFiles" -I"E:/study/StmCubeIdeProject/Autosar_DoorLockIndecation/FreeRTOS/include" -I"E:/study/StmCubeIdeProject/Autosar_DoorLockIndecation/AUTOSAR_Implementation/MCAL/INC" -I"E:/study/StmCubeIdeProject/Autosar_DoorLockIndecation/FreeRTOS/portable/GCC/ARM_CM3" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"FreeRTOS/portable/MemMang/heap_4.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

