//
// Created by gcris on 12/18/21.
//

#include "main.h"

void setDrive(int left, int right) {
    RightBack = right;
    RightFront = right;
    LeftBack = left;
    LeftFront = left;
}

void driveUserControl() {
    J3 = Controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    J2 = Controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
    setDrive(J3, J2);
}
