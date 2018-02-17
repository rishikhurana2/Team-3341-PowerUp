#include "MoveCameraRight.h"
#include <WPILib.h>

MoveCameraRight::MoveCameraRight() {
	Requires(Camera);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void MoveCameraRight::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void MoveCameraRight::Execute() {
	double getRightY = oi->getCameraRight()->GetY;
}

// Make this return true when this Command no longer needs to run execute()
bool MoveCameraRight::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void MoveCameraRight::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveCameraRight::Interrupted() {

}
