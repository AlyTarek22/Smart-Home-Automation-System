#ifndef MOTIONSENSOR_HPP
#define MOTIONSENSOR_HPP
#include "Device.hpp"

class MotionSensor : public Device
{
    bool motionDetected = false;

public:
    MotionSensor(std::string name) : Device(name) {}
    void TurnOn();
    void TurnOff();
    // void detectMotion();
    bool MotionDetected();
    virtual ~MotionSensor() = default;
    virtual void SensorType() = 0;

};
class PhilipsMotionSensor : public MotionSensor {
public:
    PhilipsMotionSensor(const std::string& name): MotionSensor(name) {};
    void SensorType() override;
};

class SamsungMotionSensor : public MotionSensor {
public:
    SamsungMotionSensor(const std::string& name): MotionSensor(name) {};
    void SensorType() override;
};

#endif