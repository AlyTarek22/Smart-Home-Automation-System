#ifndef DEVICEFACTORY_HPP
#define DEVICEFACTORY_HPP

#include <memory>
#include <string>

#include "Light.hpp"
#include "Camera.hpp"
#include "Thermostat.hpp"
#include "Doorlock.hpp"
#include "MotionSensor.hpp"

class DeviceFactory
{
public:
    virtual std::shared_ptr<Light> CreateLight(
        const std::string &name, int brightness=50) = 0;

    virtual std::shared_ptr<Camera> CreateCamera(
        const std::string &name) = 0;

    virtual std::shared_ptr<Thermostat> CreateThermostat(
        const std::string &name) = 0;

    virtual std::shared_ptr<DoorLock> CreateDoorlock(
        const std::string &name) = 0;

    virtual std::shared_ptr<MotionSensor> CreateMotionSensor(
        const std::string &name) = 0;

    virtual ~DeviceFactory() = default;
};

class PhilipsFactory : public DeviceFactory
{
public:
    std::shared_ptr<Light> CreateLight(
        const std::string &name, int brightness=50) override;

    std::shared_ptr<Camera> CreateCamera(
        const std::string &name) override;

    std::shared_ptr<Thermostat> CreateThermostat(
        const std::string &name) override;
    std::shared_ptr<DoorLock> CreateDoorlock(
        const std::string &name) override;

    std::shared_ptr<MotionSensor> CreateMotionSensor(
        const std::string &name) override;
};

class SamsungFactory : public DeviceFactory
{
public:
    std::shared_ptr<Light> CreateLight(
        const std::string &name, int brightness) override;

    std::shared_ptr<Camera> CreateCamera(
        const std::string &name) override;

    std::shared_ptr<Thermostat> CreateThermostat(
        const std::string &name) override;

    std::shared_ptr<DoorLock> CreateDoorlock(
        const std::string &name) override;

    std::shared_ptr<MotionSensor> CreateMotionSensor(
        const std::string &name) override;
};

#endif
