#ifndef DEVICECOMPOSITE_HPP
#define DEVICECOMPOSITE_HPP
#include <iostream>
#include <vector>
#include <memory>
#include "DeviceComponent.hpp"
class DeviceComposite : public DeviceComponent
{
protected:
    std::vector<std::shared_ptr<DeviceComponent>> devices;

public:
    DeviceComposite(std::string name) : DeviceComponent(name) {}
    void TurnOn();
    void TurnOff();
    void AddDevice(std::shared_ptr<DeviceComponent> device);
    void RemoveDevice(std::shared_ptr<DeviceComponent> device);
    void show();
    void TurnOnLight();
    void TurnOffLight();
    void TurnOnSecurity();
    void TurnOffSecurity();
    std::shared_ptr<DeviceComponent> Find(const std::string &target);
    ~DeviceComposite();
};

#endif