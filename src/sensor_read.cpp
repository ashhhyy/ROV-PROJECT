#include "sensor_read.h"
#include <Arduino.h>

void SensorSuite::init() {
    Serial.println("SensorSuite initialized (dummy mode)");
}

float SensorSuite::readPitch() {
    static float fakeAngle = 5.0;
    fakeAngle += random(-2, 3) * 0.5;
    Serial.print("Simulated Pitch: ");
    Serial.println(fakeAngle);
    return fakeAngle;
}
