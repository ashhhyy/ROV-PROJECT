#include "motor_control.h"
#include <Arduino.h>

const int motorPin1 = 5;
const int motorPin2 = 6;

void MotorController::init() {
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
}

void MotorController::setSpeedWithCorrection(float correction) {
    int baseSpeed = 150;  // base PWM
    int adjustedSpeed = constrain(baseSpeed + correction, 0, 255);

    analogWrite(motorPin1, adjustedSpeed);
    analogWrite(motorPin2, adjustedSpeed);

    Serial.print("Motor PWM: ");
    Serial.println(adjustedSpeed);
}
