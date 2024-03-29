#include "rgbLED.h"
using namespace vex;
using namespace S;

extern brain Brain;
extern controller Controller1;
extern controller Controller2;

extern motor RD1;
extern motor RD2;
extern motor RD3;
extern motor RD4;
extern motor_group RDrive;
extern motor LD1;
extern motor LD2;
extern motor LD3;
extern motor LD4;
extern motor_group LDrive;

extern inertial Gyro;
extern rotation parallelTrackingWheel;
extern rotation perpendicularTrackingWheel;

extern motor wIntake;

extern distance intakeDie;

extern motor lShooter;
extern motor rShooter;
extern rotation cataRot;
extern motor_group wShooter;

extern pneumatics intakeOut;
extern pneumatics intakeTilt;
extern pneumatics lWing;
extern pneumatics rWing;

extern analog_in airPressure;

extern RGB sideRails;
extern RGB underGlow;
extern RGB underGlow2;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);
