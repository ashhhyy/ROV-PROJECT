#ifndef PID_CONTROLLER_H
#define PID_CONTROLLER_H

class PIDController {
private:
    float kp, ki, kd;
    float prevError, integral;

public:
    PIDController(float p, float i, float d);
    float compute(float setpoint, float measured);
};

#endif
