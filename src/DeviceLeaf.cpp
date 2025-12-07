#include "../include/DeviceLeaf.hpp"
#include "../include/Light.hpp"
#include "../include/Doorlock.hpp"
#include "../include/MotionSensor.hpp"
#include "../include/Camera.hpp"
#include <memory>
void DeviceLeaf::TurnOn()
{
    std::cout << this->name << " is turned on" << std::endl;
}

void DeviceLeaf::TurnOff()
{
    std::cout << this->name << " is turned off" << std::endl;
}

void DeviceLeaf::show()
{
    std::cout << "DeviceLeaf: " << this->name << std::endl;
}
void DeviceLeaf::TurnOnLight()
{

    if (auto light = dynamic_cast<Light *>(device.get()))
    {
        light->TurnOn();
    }
}
void DeviceLeaf::TurnOffLight()
{
    
     if (auto light = dynamic_cast<Light *>(device.get()))
    {
        light->TurnOff();
    }
}

std::shared_ptr<DeviceComponent> DeviceLeaf::Find(const std::string &target)
{
    if (this->name == target)
        return shared_from_this();
    return nullptr;
}

void DeviceLeaf::TurnOnSecurity(){
    if(auto security = dynamic_cast<DoorLock*>(device.get()))
    {
        security->TurnOn();
    }
    if(auto security = dynamic_cast<MotionSensor*>(device.get()))
    {
        security->TurnOn();
    }
    if(auto security = dynamic_cast<Camera*>(device.get()))
    {
        security->TurnOn();
    }


}

void DeviceLeaf::TurnOffSecurity(){
    if(auto security = dynamic_cast<DoorLock*>(device.get()))
    {
        security->TurnOff();
    }
    if(auto security = dynamic_cast<MotionSensor*>(device.get()))
    {
        security->TurnOff();
    }
    if(auto security = dynamic_cast<Camera*>(device.get()))
    {
        security->TurnOff();
    }
}