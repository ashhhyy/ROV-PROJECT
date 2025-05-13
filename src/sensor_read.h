#ifndef SENSOR_READ_H
#define SENSOR_READ_H

class SensorSuite {
public:
    void init();
    float readPitch();  // Simulates MPU6050 pitch
};

#endif
