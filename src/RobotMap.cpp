// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::driveSpeedController1;
std::shared_ptr<SpeedController> RobotMap::driveSpeedController2;
std::shared_ptr<SpeedController> RobotMap::driveSpeedController3;
std::shared_ptr<SpeedController> RobotMap::driveSpeedController4;
std::shared_ptr<RobotDrive> RobotMap::driveRobotDrive4;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<AnalogGyro> RobotMap::driveGyro;

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveSpeedController1.reset(new Victor(0));
    lw->AddActuator("Drive", "Speed Controller 1", (Victor&) driveSpeedController1);
    
    driveSpeedController2.reset(new Victor(1));
    lw->AddActuator("Drive", "Speed Controller 2", (Victor&) driveSpeedController2);
    
    driveSpeedController3.reset(new Victor(2));
    lw->AddActuator("Drive", "Speed Controller 3", (Victor&) driveSpeedController3);
    
    driveSpeedController4.reset(new Victor(3));
    lw->AddActuator("Drive", "Speed Controller 4", (Victor&) driveSpeedController4);
    
    driveRobotDrive4.reset(new RobotDrive(driveSpeedController1, driveSpeedController2,
              driveSpeedController3, driveSpeedController4));
    
    driveRobotDrive4->SetSafetyEnabled(false);
        driveRobotDrive4->SetExpiration(0.1);
        driveRobotDrive4->SetSensitivity(0.5);
        driveRobotDrive4->SetMaxOutput(1.0);



    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    driveGyro.reset(new AnalogGyro(6));

}
