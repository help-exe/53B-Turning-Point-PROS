//
// Created by gcris on 12/18/21.
//
#include "main.h"


//<editor-fold desc="Motors">
pros::Motor RightBack(20,pros::E_MOTOR_GEARSET_18,true);
pros::Motor RightFront(19,pros::E_MOTOR_GEARSET_18,true);
pros::Motor LeftBack(11,pros::E_MOTOR_GEARSET_18,false);
pros::Motor LeftFront(12,pros::E_MOTOR_GEARSET_18,false);

pros::Motor Arm(10, pros::E_MOTOR_GEARSET_18,false);

pros::Motor FrontClamp(9,pros::E_MOTOR_GEARSET_18,false);
//</editor-fold>

//<editor-fold desc="Controller(s)">
pros::Controller Controller(pros::E_CONTROLLER_MASTER);
//</editor-fold>