#include "../include/DeviceLeaf.hpp"
#include "../include/Light.hpp"
void DeviceLeaf::TurnOn()
{
    std::cout << name << " is turned on" << std::endl;
}

void DeviceLeaf::TurnOff()
{
    std::cout << name << " is turned off" << std::endl;
}

void DeviceLeaf::show()
{
    std::cout << "DeviceLeaf: " << name << std::endl;
}
void DeviceLeaf::TurnOnLight()
{
  if (auto light = dynamic_cast<Light*>(device.get()))
    {
        light->TurnOn();
    }
    
}
void DeviceLeaf::TurnOffLight()
{
    device->TurnOff();
}