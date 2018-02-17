#include "Camera.h"
#include "../RobotMap.h"

Camera::Camera() : Subsystem("Camera"),
talon(new TalonSRX(1))
{

}

Camera::~Camera() {
	delete talon;
}

void Camera::InitDefaultCommand() {
	SetDefaultCommand(new CameraMoveLeft);
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void Camera::moveLeft(double val) {
	talon->Set(ControlMode::PercentOutput, val);
}

void Camera::moveRight(double val) {
	talon->Set(ControlMode::PercentOutput,val);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
