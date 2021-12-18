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

void setDriveMotors() {
    setDrive(0,0);
}
