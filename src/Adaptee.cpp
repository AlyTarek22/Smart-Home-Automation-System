#include "../include/Adaptee.hpp"
#include <iostream>

// ==============================
//      THERMOSTAT ADAPTEE
// ==============================

void ThermostatAdaptee::TurnOn()
{
    std::cout << "[Thermostat] Turning ON. Current temperature: " 
              << temperature << "C\n";
}

void ThermostatAdaptee::TurnOff()
{
    std::cout << "[Thermostat] Turning OFF.\n";
}

void ThermostatAdaptee::setTemperature(int temp)
{
    temperature = temp;
    std::cout << "[Thermostat] Temperature set to " 
              << temperature << "C\n";
}

int ThermostatAdaptee::getTemperature()
{
    return temperature;
}



// ==============================
//        CAMERA ADAPTEE
// ==============================

void CameraAdaptee::TurnOn()
{
    std::cout << "[Camera] Turning ON.\n";
}

void CameraAdaptee::TurnOff()
{
    std::cout << "[Camera] Turning OFF.\n";
}

void CameraAdaptee::StartRecording()
{
    if (!isRecording)
    {
        isRecording = true;
        std::cout << "[Camera] Recording STARTED.\n";
    }
    else
    {
        std::cout << "[Camera] Already recording.\n";
    }
}

void CameraAdaptee::StopRecording()
{
    if (isRecording)
    {
        isRecording = false;
        std::cout << "[Camera] Recording STOPPED.\n";
    }
    else
    {
        std::cout << "[Camera] Camera is not recording.\n";
    }
}



// ==============================
//       DOORLOCK ADAPTEE
// ==============================

void DoorlockAdaptee::TurnOn()
{
    if (!isOpen)
    {
        isOpen = true;
        std::cout << "[Doorlock] Door UNLOCKED.\n";
    }
    else
    {
        std::cout << "[Doorlock] Already unlocked.\n";
    }
}

void DoorlockAdaptee::TurnOff()
{
    if (isOpen)
    {
        isOpen = false;
        std::cout << "[Doorlock] Door LOCKED.\n";
    }
    else
    {
        std::cout << "[Doorlock] Already locked.\n";
    }
}



// ==============================
//        LIGHT ADAPTEE
// ==============================

void LightAdaptee::TurnOn()
{
    std::cout << "[Light] Turning ON. Brightness = " 
              << brightness << "%\n";
}

void LightAdaptee::TurnOff()
{
    std::cout << "[Light] Turning OFF.\n";
}

void LightAdaptee::setBrightness(int level)
{
    brightness = level;
    std::cout << "[Light] Brightness set to " 
              << brightness << "%\n";
}

int LightAdaptee::getBrightness()
{
    return brightness;
}
