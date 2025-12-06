#ifndef DEVICELEAF_HPP
#define DEVICELEAF_HPP
#include <iostream>
#include "DeviceComponent.hpp"
class DeviceLeaf : public DeviceComponent
{
    std::string name;

public:
    DeviceLeaf(std::string name) : name(name) {}
    void TurnOn();
    void TurnOff();
};

#endif