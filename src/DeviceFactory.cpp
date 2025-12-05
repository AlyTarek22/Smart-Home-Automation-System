#include "../include/DeviceFactory.hpp"

// PhilipsFactory
std::shared_ptr<Light> PhilipsFactory::CreateLight(const std::string& name, int brightness) {
    return std::make_shared<LEDLight>(name, brightness);
}

std::shared_ptr<Camera> PhilipsFactory::CreateCamera(const std::string& name) {
    return std::make_shared<WiredCamera>(name);
}

std::shared_ptr<Thermostat> PhilipsFactory::CreateThermostat(const std::string& name) {
    return std::make_shared<SmartThermostatA>(name);

}
std::shared_ptr<DoorLock> PhilipsFactory::CreateDoorlock(const std::string& name) {
    return std::make_shared<PhilipsDoorLock>(name);
}

std::shared_ptr<MotionSensor> PhilipsFactory::CreateMotionSensor(const std::string& name) {
    return std::make_shared<PhilipsMotionSensor>(name);
}

// SamsungFactory
std::shared_ptr<Light> SamsungFactory::CreateLight(
        const std::string& name, int brightness) {
    return std::make_shared<HalogenLight>(name, brightness);
}

std::shared_ptr<Camera> SamsungFactory::CreateCamera(
        const std::string& name) {
    return std::make_shared<WirelessCamera>(name);
}

std::shared_ptr<Thermostat> SamsungFactory::CreateThermostat(
        const std::string& name) {
    return std::make_shared<SmartThermostatB>(name);
}

std::shared_ptr<DoorLock> SamsungFactory::CreateDoorlock(
        const std::string& name) {
    return std::make_shared<SamsungDoorLock>(name);
}

std::shared_ptr<MotionSensor> SamsungFactory::CreateMotionSensor(
        const std::string& name) {
    return std::make_shared<SamsungMotionSensor>(name);
}
