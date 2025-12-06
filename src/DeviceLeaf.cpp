#include "../include/DeviceLeaf.hpp"



void DeviceLeaf::TurnOn() {
    std::cout << name << " is turned on" << std::endl;
}

void DeviceLeaf::TurnOff() {
    std::cout << name << " is turned off" << std::endl;
}

DeviceLeaf::~DeviceLeaf() {
}
