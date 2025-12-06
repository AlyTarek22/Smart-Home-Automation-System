#include "../include/DeviceComposite.hpp"
#include <algorithm>
DeviceComposite::~DeviceComposite() {

}
void DeviceComposite::AddDevice(std::shared_ptr<DeviceComponent> device) {
    devices.push_back(device);
}
void DeviceComposite::RemoveDevice(std::shared_ptr<DeviceComponent> device) {
    devices.erase(std::remove(devices.begin(), devices.end(), device), devices.end());
}
void DeviceComposite::TurnOn() {
    for (auto device : devices) {
        device->TurnOn();
    }
}
void DeviceComposite::TurnOff() {
    for (auto device : devices) {
        device->TurnOff();
    }
}