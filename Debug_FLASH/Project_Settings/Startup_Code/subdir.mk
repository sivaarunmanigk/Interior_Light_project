################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../Project_Settings/Startup_Code/startup_S32K144.S 

OBJS += \
./Project_Settings/Startup_Code/startup_S32K144.o 


# Each subdirectory must supply rules for building sources it contributes
Project_Settings/Startup_Code/%.o: ../Project_Settings/Startup_Code/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS Assembler'
	arm-none-eabi-gcc "@Project_Settings/Startup_Code/startup_S32K144.args" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


