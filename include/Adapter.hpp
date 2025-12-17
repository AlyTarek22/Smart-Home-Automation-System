#ifndef ADAPTER_HPP
#define ADAPTER_HPP
#include "Thermostat.hpp"
#include "Camera.hpp"
#include "MotionSensor.hpp"
#include "Doorlock.hpp"
#include "Light.hpp"
#include "Adaptee.hpp"
#include <string>
class ThermostatAdapter : public Thermostat
{
    ThermostatAdaptee *thermostatAdaptee;

public:
    ThermostatAdapter(std::string name, ThermostatAdaptee *thermostatAdaptee, int temperature = 50) : Thermostat(name, temperature), thermostatAdaptee(thermostatAdaptee) {}
    void TurnOn();
    void TurnOff();
    void setTemperature(int temperature);
    int getTemperature();
    void ThermostatType();
};
class CameraAdapter : public Camera
{
    CameraAdaptee *cameraAdaptee;

public:
    CameraAdapter(std::string name, CameraAdaptee *cameraAdaptee) : Camera(name), cameraAdaptee(cameraAdaptee) {}
    void TurnOn();
    void TurnOff();
    void StartRecording();
    void StopRecording();
    void ToggleNightMode();
    void CameraType();
};
/* class MotionSensorAdapter:public MotionSensor{

}; */
class DoorlockAdapter : public DoorLock
{
    DoorlockAdaptee *doorlockAdaptee;

public:
        DoorlockAdapter(std::string name, DoorlockAdaptee *doorlockAdaptee) : DoorLock(name), doorlockAdaptee(doorlockAdaptee) {};
    void TurnOn();
    void TurnOff();
    void LockType();
};
class LightAdapter : public Light
{
    LightAdaptee *lightAdaptee;

public:
    LightAdapter(std::string name, int brightnessLevel, LightAdaptee *lightAdaptee) : Light(name, brightnessLevel), lightAdaptee(lightAdaptee) {}
    void setBrightness(int brightnessLevel);
    int getBrightness();
    void TurnOn();
    void TurnOff();
    void LightType();
};
#endif