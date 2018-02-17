#include "CommandBase.h"
#include <iostream>

#include <Commands/Scheduler.h>



// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.


DriveTrain* CommandBase::drive = nullptr;
Lift* CommandBase::lift = nullptr;
Camera* CommandBase::camera = nullptr;
std::unique_ptr<OI> CommandBase::oi;


CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}

void CommandBase::initialize()
{
	camera = new Camera();
	drive = new DriveTrain();
	lift = new Lift();
	oi = std::make_unique<OI>();
	std::cout << "commandBase initialize completed" << std::endl;

}
