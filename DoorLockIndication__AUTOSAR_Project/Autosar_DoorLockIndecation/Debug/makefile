################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include FreeRTOS/portable/MemMang/subdir.mk
-include FreeRTOS/portable/GCC/ARM_CM3/subdir.mk
-include FreeRTOS/subdir.mk
-include AUTOSAR_Implementation/RTE_Generation/subdir.mk
-include AUTOSAR_Implementation/MCAL/subdir.mk
-include AUTOSAR_Implementation/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Autosar_DoorLockIndecation.axf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Autosar_DoorLockIndecation.list \

OBJCOPY_BIN += \
Autosar_DoorLockIndecation.bin \


# All Target
all: Autosar_DoorLockIndecation.axf secondary-outputs

# Tool invocations
Autosar_DoorLockIndecation.axf: $(OBJS) $(USER_OBJS) E:\study\StmCubeIdeProject\Autosar_DoorLockIndecation\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "Autosar_DoorLockIndecation.axf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"E:\study\StmCubeIdeProject\Autosar_DoorLockIndecation\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Autosar_DoorLockIndecation.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Autosar_DoorLockIndecation.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Autosar_DoorLockIndecation.list"
	@echo 'Finished building: $@'
	@echo ' '

Autosar_DoorLockIndecation.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Autosar_DoorLockIndecation.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
