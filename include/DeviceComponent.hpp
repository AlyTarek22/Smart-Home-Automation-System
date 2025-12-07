#ifndef DEVICECOMPONENT_HPP
#define DEVICECOMPONENT_HPP
#include <memory>
#include <string>
class DeviceComponent : public std::enable_shared_from_this<DeviceComponent>
{
protected:
    std::string name;

public:
    DeviceComponent(std::string name) : name(name) {}
    std::string GetName() { return name; }
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual void show() = 0;
    virtual void TurnOnLight() = 0;
    virtual void TurnOffLight() = 0;
    virtual void TurnOnSecurity() = 0;
    virtual void TurnOffSecurity() = 0;
    virtual std::shared_ptr<DeviceComponent> Find(const std::string &target) = 0;
    virtual ~DeviceComponent() = default;
};

#endif