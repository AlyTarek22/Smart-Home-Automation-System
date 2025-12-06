#ifndef DEVICECOMPOSITE_HPP
#define DEVICECOMPOSITE_HPP
#include <iostream>
#include <vector>
#include <memory>
#include "DeviceComponent.hpp"
class DeviceComposite : public DeviceComponent
{
    protected:
    std::string name;
    std::vector<std::shared_ptr<DeviceComponent>> devices;

public:
    DeviceComposite(std::string name) : name(name) {}
    void TurnOn();
    void TurnOff();
    void AddDevice(std::shared_ptr<DeviceComponent> device);
    void RemoveDevice(std::shared_ptr<DeviceComponent> device);
    ~DeviceComposite();
};

#endif