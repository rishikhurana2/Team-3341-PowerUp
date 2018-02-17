################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/AcquireCrate.cpp \
../src/Commands/LiftPositionControl.cpp \
../src/Commands/MoveLift.cpp \
../src/Commands/MoveLiftToHeight.cpp \
../src/Commands/MoveLiftToMinHeight.cpp \
../src/Commands/ReleaseCrate.cpp \
../src/Commands/StopCatcher.cpp \
../src/Commands/TankDrive.cpp 

OBJS += \
./src/Commands/AcquireCrate.o \
./src/Commands/LiftPositionControl.o \
./src/Commands/MoveLift.o \
./src/Commands/MoveLiftToHeight.o \
./src/Commands/MoveLiftToMinHeight.o \
./src/Commands/ReleaseCrate.o \
./src/Commands/StopCatcher.o \
./src/Commands/TankDrive.o 

CPP_DEPS += \
./src/Commands/AcquireCrate.d \
./src/Commands/LiftPositionControl.d \
./src/Commands/MoveLift.d \
./src/Commands/MoveLiftToHeight.d \
./src/Commands/MoveLiftToMinHeight.d \
./src/Commands/ReleaseCrate.d \
./src/Commands/StopCatcher.d \
./src/Commands/TankDrive.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"C:\Users\Rishi Khurana/wpilib/cpp/current/include" -I"C:\Users\Rishi Khurana\Desktop\Team-3341-PowerUp\src" -I"C:\Users\Rishi Khurana/wpilib/user/cpp/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


