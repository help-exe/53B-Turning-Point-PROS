//
// Created by gcris on 12/19/21.
//

#include "main.h"

void armUserControl() {
    R1 = Controller.get_digital(DIGITAL_R1);
    R2 = Controller.get_digital(DIGITAL_R2);
    if(armCalibrating && Arm.is_stopped()) {
        armCalibrating = false;
    }
    if(!armCalibrating && Arm.get_position() < ARM_LOW_LIMIT) {
        Controller.rumble("..");
        armCalibrating = true;
        Arm.move_absolute(ARM_CALIBRATION_POINT, 70);
    }

    if (!armCalibrating) {
        Arm = R1 ? 70 : (R2 ? -70 : 0);
    }

}
