#ifndef Camera_H
#define Camera_H

#include <Commands/Subsystem.h>
#include "ctre/Phoenix.h"
#include <WPILib.h>

class Camera : frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	TalonSRX * talon;
public:
	Camera();
	~Camera();
	void InitDefaultCommand();
	void moveLeft(double left);
	void moveRight(double left);
};

#endif  // Camera_H
