################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Lottery.cpp \
../src/LotteryFactory.cpp \
../src/MegaLottery.cpp \
../src/main.cpp 

OBJS += \
./src/Lottery.o \
./src/LotteryFactory.o \
./src/MegaLottery.o \
./src/main.o 

CPP_DEPS += \
./src/Lottery.d \
./src/LotteryFactory.d \
./src/MegaLottery.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++11 -O3 -Wall -c -fmessage-length=0 -Wno-attributes -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


