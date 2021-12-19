//
// Created by gcris on 12/18/21.
//
#include "main.h"

//<editor-fold desc="Motors">
extern pros::Motor RightBack;
extern pros::Motor RightFront;
extern pros::Motor LeftBack;
extern pros::Motor LeftFront;
extern pros::Motor Arm;
extern pros::Motor FrontClamp;
//</editor-fold>


//<editor-fold desc="Controller(s)">
extern pros::Controller Controller;
//</editor-fold>

extern bool armCalibrating;


// Controller variables
extern int J1;
extern int J2;
extern int J3;
extern int J4;

extern bool BX;
extern bool BY;
extern bool BA;
extern bool BB;

extern bool BU;
extern bool BL;
extern bool BD;
extern bool BR;

extern bool L1;
extern bool L2;
extern bool R1;
extern bool R2;

#define D_DIST sqrt(1552)
#define S_DIST 24
#define W_CIRC 4*M_PI
#define ARM_LOW_LIMIT 70
#define ARM_CALIBRATION_POINT 98



#ifndef INC_53B_TURNING_POINT_PROS_GLOBALS_H
#define INC_53B_TURNING_POINT_PROS_GLOBALS_H

#endif //INC_53B_TURNING_POINT_PROS_GLOBALS_H
