################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/Jefferson\ Jr/eclipse/cpp-mars/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.10/libraries/VarSpeedServo/VarSpeedServo.cpp 

LINK_OBJ += \
./libraries/VarSpeedServo/VarSpeedServo.cpp.o 

CPP_DEPS += \
./libraries/VarSpeedServo/VarSpeedServo.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/VarSpeedServo/VarSpeedServo.cpp.o: C:/Users/Jefferson\ Jr/eclipse/cpp-mars/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.10/libraries/VarSpeedServo/VarSpeedServo.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\Jefferson Jr\eclipse\cpp-mars\eclipse\arduinoPlugin\tools\arduino\avr-gcc\4.8.1-arduino5/bin/avr-g++" -c -g -Os -std=gnu++11 -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=8000000L -DARDUINO=10606 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR     -I"C:\Users\Jefferson Jr\eclipse\cpp-mars\eclipse\arduinoPlugin\packages\arduino\hardware\avr\1.6.10\cores\arduino" -I"C:\Users\Jefferson Jr\eclipse\cpp-mars\eclipse\arduinoPlugin\packages\arduino\hardware\avr\1.6.10\variants\eightanaloginputs" -I"C:\Users\Jefferson Jr\eclipse\cpp-mars\eclipse\arduinoPlugin\packages\arduino\hardware\avr\1.6.10\libraries\VarSpeedServo" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '


