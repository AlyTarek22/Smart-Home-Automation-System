#ifndef SMARTHOMEBUILDER_HPP
#define SMARTHOMEBUILDER_HPP
#include <memory>
#include "DeviceComposite.hpp"
#include "DeviceLeaf.hpp"
#include "Light.hpp"
#include "Camera.hpp"
#include "Thermostat.hpp"
#include "MotionSensor.hpp"
#include "DeviceFactory.hpp"
class SmartHomeBuilder
{
    std::shared_ptr<DeviceFactory> factory;
public:
SmartHomeBuilder(std::shared_ptr<DeviceFactory> factory):factory(factory){}
    std::shared_ptr<DeviceComposite> buildDefaultHome();
   
};

#endif