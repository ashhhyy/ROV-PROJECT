#include "../src/motor_control.h"

MotorController motor;

void setup() {
  Serial.begin(115200);
  motor.init();
}

void loop() {
  for (int i = -50; i <= 50; i += 10) {
    motor.setSpeedWithCorrection(i);
    delay(500);
  }
}
