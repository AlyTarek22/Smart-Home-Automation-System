#include "../include/Adapter.hpp"
#include <iostream>

//
// ================================================
//               THERMOSTAT ADAPTER
// ================================================
//

void ThermostatAdapter::TurnOn()
{
    std::cout << "[ThermostatAdapter] ";
    thermostatAdaptee->TurnOn();
}

void ThermostatAdapter::TurnOff()
{
    std::cout << "[ThermostatAdapter] ";
    thermostatAdaptee->TurnOff();
}

void ThermostatAdapter::setTemperature(int temperature)
{
    this->temperature = temperature;
    thermostatAdaptee->setTemperature(temperature);
}

int ThermostatAdapter::getTemperature()
{
    return thermostatAdaptee->getTemperature();
}

void ThermostatAdapter::ThermostatType()
{
    std::cout << "[ThermostatAdapter] (Adapted Thermostat: " 
              << name << ")\n";
}



//
// ================================================
//                 CAMERA ADAPTER
// ================================================
//

void CameraAdapter::TurnOn()
{
    std::cout << "[CameraAdapter] ";
    cameraAdaptee->TurnOn();
}

void CameraAdapter::TurnOff()
{
    std::cout << "[CameraAdapter] ";
    cameraAdaptee->TurnOff();
}

void CameraAdapter::StartRecording()
{
    cameraAdaptee->StartRecording();
}

void CameraAdapter::StopRecording()
{
    cameraAdaptee->StopRecording();
}

void CameraAdapter::ToggleNightMode()
{
    std::cout << "[CameraAdapter] Night Mode toggled (no adaptee support).\n";
}

void CameraAdapter::CameraType()
{
    std::cout << "[CameraAdapter] (Adapted Camera: " 
              << name << ")\n";
}



//
// ================================================
//                 DOORLOCK ADAPTER
// ================================================
//

void DoorlockAdapter::TurnOn()
{
    std::cout << "[DoorlockAdapter] ";
    doorlockAdaptee->TurnOn();
}

void DoorlockAdapter::TurnOff()
{
    std::cout << "[DoorlockAdapter] ";
    doorlockAdaptee->TurnOff();
}

void DoorlockAdapter::LockType()
{
    std::cout << "[DoorlockAdapter] (Adapted Doorlock: " 
              << name << ")\n";
}



//
// ================================================
//                  LIGHT ADAPTER
// ================================================
//

void LightAdapter::TurnOn()
{
    std::cout << "[LightAdapter] ";
    lightAdaptee->TurnOn();
}

void LightAdapter::TurnOff()
{
    std::cout << "[LightAdapter] ";
    lightAdaptee->TurnOff();
}

void LightAdapter::setBrightness(int brightnessLevel)
{
    this->brightness = brightnessLevel;
    lightAdaptee->setBrightness(brightnessLevel);
}

int LightAdapter::getBrightness()
{
    return lightAdaptee->getBrightness();
}

void LightAdapter::LightType()
{
    std::cout << "[LightAdapter] (Adapted Light: "
              << name << ")\n";
}
