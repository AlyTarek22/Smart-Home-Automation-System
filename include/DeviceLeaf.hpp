#ifndef DEVICELEAF_HPP
#define DEVICELEAF_HPP
#include <iostream>
#include "DeviceComponent.hpp"
#include "Device.hpp"
#include <memory>
class DeviceLeaf : public DeviceComponent
{

    std::string name;
    std::shared_ptr<Device> device;

public:
    // DeviceLeaf(std::string name) : name(name) {}
    DeviceLeaf(std::shared_ptr<Device> d) : device(d),name(d->GetName()) {}

    void TurnOn();
    void show();
    void TurnOff();
};

#endif