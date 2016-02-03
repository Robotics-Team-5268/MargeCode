// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Drive.h"
#include "../RobotMap.h"
#include "../Robot.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Drive::Drive() : Subsystem("Drive") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    speedController1 = RobotMap::driveSpeedController1;
    speedController2 = RobotMap::driveSpeedController2;
    speedController3 = RobotMap::driveSpeedController3;
    speedController4 = RobotMap::driveSpeedController4;
    robotDrive4 = RobotMap::driveRobotDrive4;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
//    speedController1->SetInverted(true);
//    speedController2->SetInverted(true);
    gyro = RobotMap::driveGyro;
}
void Drive::AddSpeedControllers()
{
	SmartDashboard::PutNumber("Speed Controller 1", speedController1->Get());
	SmartDashboard::PutNumber("Speed Controller 2", speedController2->Get());
	SmartDashboard::PutNumber("Speed Controller 3", speedController3->Get());
	SmartDashboard::PutNumber("Speed Controller 4", speedController4->Get());
	SmartDashboard::PutNumber("Gyro Angle", gyro->GetAngle());
}
void Drive::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

void Drive::takeInput(){
	robotDrive4->ArcadeDrive((-Robot::oi->getJoystick1()->GetY()), -Robot::oi->getJoystick1()->GetX()/2);
}
