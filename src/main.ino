#include "motor_control.h"
#include "sensor_read.h"
#include "pid_controller.h"

MotorController motor;
SensorSuite sensors;
PIDController pid(1.0, 0.05, 0.01); // Example PID values

void setup() {
  Serial.begin(115200);
  motor.init();
  sensors.init();
}

void loop() {
  float currentAngle = sensors.readPitch();  // Simulate pitch for now
  float targetAngle = 0.0;                   // Level ROV

  float correction = pid.compute(targetAngle, currentAngle);

  motor.setSpeedWithCorrection(correction);  // Adjust based on PID
  delay(100);
}
