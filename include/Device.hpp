#ifndef DEVICE_HPP
#define DEVICE_HPP
#include <iostream>
class Device
{
protected:
    std::string name;

public:
    Device(std::string name) : name(name) {}
    std::string GetName();
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;

    virtual ~Device() = default;
};
#endif