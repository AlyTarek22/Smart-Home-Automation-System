#include "../include/MotionSensor.hpp"

// MotionSensor::MotionSensor(std::string name) : Device(name) {}

void MotionSensor::TurnOn() {
    std::cout << "MotionSensor " << name << " turned on" << std::endl;
}

void MotionSensor::TurnOff() {
    std::cout << "MotionSensor " << name << " turned off" << std::endl;
}

/* void MotionSensor::detectMotion() {
    std::cout << "MotionSensor " << name << " detected motion" << std::endl;
    MotionDetected = true;
} */

bool MotionSensor::MotionDetected() {
    return motionDetected;
}

void PhilipsMotionSensor::SensorType() {
    std::cout << "Philips MotionSensor" << std::endl;
}

void SamsungMotionSensor::SensorType() {
    std::cout << "Samsung MotionSensor" << std::endl;
}
