#ifndef Thermostat_HPP
#define Thermostat_HPP
#include "Device.hpp"

class Thermostat : public Device
{
    protected:
    int temperature;

public:
    Thermostat(std::string name, int temperature=50) : Device(name), temperature(temperature) {}
    void TurnOn();
    void TurnOff();
    void setTemperature(int temperature);
    int getTemperature();
    virtual void ThermostatType() = 0;
};
class SmartThermostatA: public Thermostat{
    public:
    SmartThermostatA(std::string name): Thermostat(name){};
    void ThermostatType();
};
class SmartThermostatB: public Thermostat{
    public:
    SmartThermostatB(std::string name): Thermostat(name){};
    void ThermostatType();
};

#endif