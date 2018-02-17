#ifndef OI_H
#define OI_H
#include "WPILib.h"
#include "RobotMap.h"

class OI{
private:
	Joystick* leftStick;
	Joystick* rightStick;

	Joystick* liftStick;
	JoystickButton* testButton;
	JoystickButton* calibrateLift;
	JoystickButton* getCrate;

	JoystickButton* cameraLeft;
	JoystickButton* cameraRight;
	JoystickButton* shootCrate;
public:
	OI();
	void catcherButtons();
	Joystick* getLeftStick();
	Joystick* getRightStick();
	Joystick* getLiftStick();
	JoystickButton* getCameraLeft();
	JoystickButton* getCameraRight();
};

#endif  // OI_H
