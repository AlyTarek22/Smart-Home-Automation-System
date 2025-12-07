#include "../include/DeviceComposite.hpp"
#include "../include/DeviceLeaf.hpp"
#include "../include/Light.hpp"
#include "../include/Doorlock.hpp"
#include "../include/MotionSensor.hpp"
#include "../include/Camera.hpp"
#include <algorithm>
#include <memory>
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
    std::cout << "Device Composite: " << this->name << std::endl;
    for (auto device : devices)
    {
        device->show();
    }
}
void DeviceComposite::TurnOnLight()
{
    for (auto &device : devices)
    {

        if (auto composite = dynamic_cast<DeviceComposite *>(device.get()))
        {
            composite->TurnOnLight(); // recurse
        }
        else if (auto leaf = dynamic_cast<DeviceLeaf *>(device.get()))
        {
            leaf->TurnOnLight(); // let the leaf handle it
        }
    }
}
void DeviceComposite::TurnOffLight()
{
    for (auto &device : devices)
    {

        if (auto composite = dynamic_cast<DeviceComposite *>(device.get()))
        {
            composite->TurnOffLight(); // recurse
        }
        else if (auto leaf = dynamic_cast<DeviceLeaf *>(device.get()))
        {
            leaf->TurnOffLight(); // let the leaf handle it
        }
    }
}

std::shared_ptr<DeviceComponent> DeviceComposite::Find(const std::string &target)
{
    if (this->name == target)
        return shared_from_this();

    for (auto child : devices)
    {
        auto result = child->Find(target);
        if (result)
        {
            return result;
        }
    }
    return nullptr;
}
void DeviceComposite::TurnOnSecurity()
{
    for (auto device : devices)
    {

       if(auto composite=dynamic_cast<DeviceComposite*>(device.get())){
        composite->TurnOnSecurity();
       }
       else if(auto leaf=dynamic_cast<DeviceLeaf*>(device.get())){
        leaf->TurnOnSecurity();
       }
    }
}
void DeviceComposite::TurnOffSecurity()
{
    for (auto device : devices)
    {
       if(auto composite=dynamic_cast<DeviceComposite*>(device.get())){
        composite->TurnOffSecurity();
       }
       else if(auto leaf=dynamic_cast<DeviceLeaf*>(device.get())){
        leaf->TurnOffSecurity();
       }
    }
}