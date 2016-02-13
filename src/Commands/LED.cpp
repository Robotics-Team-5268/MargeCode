#include "LED.h"
#include "..\Subsystems\LEDController.h"

LED::LED()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	//Requires(LEDController);
}

// Called just before this Command runs the first time
void LED::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void LED::Execute()
{
	Robot::ledController->TurnOn();
}

// Make this return true when this Command no longer needs to run execute()
bool LED::IsFinished()
{
	return !Robot::oi->getButton3Pressed();
}

// Called once after isFinished returns true
void LED::End()
{
	Robot::ledController->TurnOff();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LED::Interrupted()
{

}
