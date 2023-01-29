#include "display/lv_misc/lv_txt.h"
#include "pros/adi.hpp"
#include "pros/imu.hpp"
#include "pros/misc.h"
#include "pros/misc.hpp"
#include "pros/motors.hpp"
#include "pros/rotation.hpp"

// BUMPER SWITCH
extern pros::ADIDigitalIn bumper;

// ENCODERS
//extern pros::ADIEncoder encRight;
//extern pros::ADIEncoder encLeft;
extern pros::ADIEncoder encMiddle;

// ROTATION SENSORS
extern pros::Rotation encRight;
extern pros::Rotation encLeft;

// MOTORS
extern pros::Motor intake;
extern pros::Motor indexer;
extern pros::Motor shooter1;
extern pros::Motor shooter2;
extern pros::Motor catapult;

extern pros::Motor driveLeftBack;
extern pros::Motor driveLeftMiddle;
extern pros::Motor driveLeftFront;
extern pros::Motor driveRightBack;
extern pros::Motor driveRightMiddle;
extern pros::Motor driveRightFront;

// CONTROLLER
extern pros::Controller controller;

// PNEUMATICS
extern pros::ADIDigitalOut piston;

// namespace enc {
//     extern pros::Rotation right;
//     extern pros::Rotation left;
//     extern pros::Rotation back;
// //     extern pros::Rotation fly;
// }

// extern const double p;
// extern const double circ;
// extern const double L;
// extern const double B;

// extern double prePos[3];
// extern double curPos[3];

// extern double globalPos[3];

// extern double P, tP, turnP;
// extern double tD, tI, D, I, turnD, turnI, preTheta, preP, preTurn, tPID, PID, turnPID;
// extern bool enable;
// extern const double kp;
// extern const double kd;
// extern const double ki;

// extern const double tkp;
// extern const double tkd;
// extern const double tki;

// extern const double turnkp;
// extern const double turnkd;
// extern const double turnki;
// extern double power;

extern pros::Imu inertial_sensor;