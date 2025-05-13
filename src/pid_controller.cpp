#include "pid_controller.h"
#include <Arduino.h>

PIDController::PIDController(float p, float i, float d)
    : kp(p), ki(i), kd(d), prevError(0), integral(0) {}

float PIDController::compute(float setpoint, float measured) {
    float error = setpoint - measured;
    integral += error;
    float derivative = error - prevError;
    prevError = error;

    float output = kp * error + ki * integral + kd * derivative;

    Serial.print("PID Output: ");
    Serial.println(output);
    return output;
}
