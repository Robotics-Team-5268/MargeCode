// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVE_H
#define DRIVE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Drive: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<SpeedController> speedController1;
	std::shared_ptr<SpeedController> speedController2;
	std::shared_ptr<SpeedController> speedController3;
	std::shared_ptr<SpeedController> speedController4;
	std::shared_ptr<RobotDrive> robotDrive4;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<AnalogGyro> gyro;
public:
	Drive();
	void safetyOff(){robotDrive4->SetSafetyEnabled(false);}
	void InitDefaultCommand();
	void AddSpeedControllers();
	AnalogGyro* getGyro();
	void setMotors(float leftSpeed, float rightSpeed);
	float returnAngle();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	void takeInput();
};

#endif
