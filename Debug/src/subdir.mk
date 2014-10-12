################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Dictionary.cpp \
../src/MC_Project1_Cryptanalysis.cpp \
../src/MonoAlphaSubstituteCipher.cpp \
../src/ShiftCipher.cpp 

OBJS += \
./src/Dictionary.o \
./src/MC_Project1_Cryptanalysis.o \
./src/MonoAlphaSubstituteCipher.o \
./src/ShiftCipher.o 

CPP_DEPS += \
./src/Dictionary.d \
./src/MC_Project1_Cryptanalysis.d \
./src/MonoAlphaSubstituteCipher.d \
./src/ShiftCipher.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


