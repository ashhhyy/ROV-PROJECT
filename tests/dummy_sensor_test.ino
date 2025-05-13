#include "../src/sensor_read.h"

SensorSuite testSensor;

void setup() {
  Serial.begin(115200);
  testSensor.init();
}

void loop() {
  testSensor.readPitch();
  delay(500);
}
