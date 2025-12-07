#ifndef DEVICELEAF_HPP
#define DEVICELEAF_HPP
#include <iostream>
#include "DeviceComponent.hpp"
#include "Device.hpp"
#include <memory>
class DeviceLeaf : public DeviceComponent
{

    
    std::shared_ptr<Device> device;

public:
    DeviceLeaf(std::shared_ptr<Device> d) :DeviceComponent(d->GetName()), device(d) {}

    void TurnOn();
    void show();
    void TurnOff();
    void TurnOnLight();
    void TurnOffLight();
    void TurnOnSecurity();
    void TurnOffSecurity();
    std::shared_ptr<DeviceComponent> Find(const std::string& target);
};

#endif