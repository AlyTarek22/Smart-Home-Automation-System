#include "../include/DeviceComposite.hpp"
#include "../include/Light.hpp"
#include <algorithm>
DeviceComposite::~DeviceComposite()
{
}
void DeviceComposite::AddDevice(std::shared_ptr<DeviceComponent> device)
{
    devices.push_back(device);
}
void DeviceComposite::RemoveDevice(std::shared_ptr<DeviceComponent> device)
{
    devices.erase(std::remove(devices.begin(), devices.end(), device), devices.end());
}
void DeviceComposite::TurnOn()
{
    for (auto device : devices)
    {
        device->TurnOn();
    }
}
void DeviceComposite::TurnOff()
{
    for (auto device : devices)
    {
        device->TurnOff();
    }
}

void DeviceComposite::show()
{
    std::cout << "Device Composite: " << name << std::endl;
    for (auto device : devices)
    {
        device->show();
    }
}
void DeviceComposite::TurnOnLight()
{
    for (auto device : devices)
    {
        device->TurnOnLight();
    }
}
void DeviceComposite::TurnOffLight()
{
    for (auto device : devices)
    {
        if (auto light = dynamic_cast<Light *>(device.get()))
        {
            light->TurnOn();
        }
    }
}