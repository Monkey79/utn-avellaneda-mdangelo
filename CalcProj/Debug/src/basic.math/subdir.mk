################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/basic.math/bMath.c 

OBJS += \
./src/basic.math/bMath.o 

C_DEPS += \
./src/basic.math/bMath.d 


# Each subdirectory must supply rules for building sources it contributes
src/basic.math/%.o: ../src/basic.math/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


