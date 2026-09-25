################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/rtos/osif/osif_baremetal.c 

OBJS += \
./SDK/rtos/osif/osif_baremetal.o 

C_DEPS += \
./SDK/rtos/osif/osif_baremetal.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/rtos/osif/%.o: ../SDK/rtos/osif/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@SDK/rtos/osif/osif_baremetal.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


