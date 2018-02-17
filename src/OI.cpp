#include "OI.h"
#include "Commands/AcquireCrate.h"
#include "Commands/StopCatcher.h"
#include "Commands/ReleaseCrate.h"


#include <WPILib.h>
#include "Commands/MoveLiftToHeight.h"
#include "Commands/LiftPositionControl.h"
#include "Commands/MoveLiftToMinHeight.h"


OI::OI() : leftStick(new Joystick(0)),
rightStick(new Joystick(1)),
liftStick(new Joystick(2)),
cameraLeft(new JoystickButton(leftStick, 10)),
cameraRight(new JoystickButton(rightStick,11)),
testButton(new JoystickButton(rightStick,50)),
calibrateLift(new JoystickButton(liftStick,40)),
shootCrate(new JoystickButton(30)),
getCrate(new JoystickButton(20))
{
	testButton = new JoystickButton(liftStick,1);
	calibrateLift = new JoystickButton(liftStick,3);
	testButton->WhenPressed(new MoveLiftToHeight(4));
	calibrateLift->WhenPressed(new MoveLiftToMinHeight());

	shootCrate = new JoystickButton(leftStick, 1);
		shootCrate->WhenPressed(new ReleaseCrate());
		shootCrate->WhenReleased(new StopCatcher());


		getCrate = new JoystickButton(leftStick, 2);
		getBall2->WhenPressed(new AcquireCrate());
		getBall2->WhenReleased(new StopCatcher());




}



void OI::catcherButtons()
{

}
Joystick* OI::getLeftStick()
{
	return leftStick;
}

Joystick* OI::getRightStick()
{
	return rightStick;
}

Joystick* OI::getLiftStick()
{
	return liftStick;
}

JoystickButton* OI::getCameraLeft() {
	return cameraLeft;
}

JoystickButton* OI::getCameraRight() {
	return cameraRight;
}

