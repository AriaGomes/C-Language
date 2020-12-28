################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Lab\ 1\ -\ C.c 

OBJS += \
./src/Lab\ 1\ -\ C.o 

C_DEPS += \
./src/Lab\ 1\ -\ C.d 


# Each subdirectory must supply rules for building sources it contributes
src/Lab\ 1\ -\ C.o: ../src/Lab\ 1\ -\ C.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Lab 1 - C.d" -MT"src/Lab\ 1\ -\ C.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


