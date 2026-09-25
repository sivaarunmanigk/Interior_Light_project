################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/drivers/src/flexcan/flexcan_driver.c \
../SDK/platform/drivers/src/flexcan/flexcan_hw_access.c \
../SDK/platform/drivers/src/flexcan/flexcan_irq.c 

OBJS += \
./SDK/platform/drivers/src/flexcan/flexcan_driver.o \
./SDK/platform/drivers/src/flexcan/flexcan_hw_access.o \
./SDK/platform/drivers/src/flexcan/flexcan_irq.o 

C_DEPS += \
./SDK/platform/drivers/src/flexcan/flexcan_driver.d \
./SDK/platform/drivers/src/flexcan/flexcan_hw_access.d \
./SDK/platform/drivers/src/flexcan/flexcan_irq.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/drivers/src/flexcan/%.o: ../SDK/platform/drivers/src/flexcan/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@SDK/platform/drivers/src/flexcan/flexcan_driver.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


