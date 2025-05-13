#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

class MotorController {
public:
    void init();
    void setSpeedWithCorrection(float correction);  // Uses correction value
};

#endif
