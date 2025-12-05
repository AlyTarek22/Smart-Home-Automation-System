#include "../include/Thermostat.hpp"


void Thermostat::TurnOn() {
    std::cout << "Thermostat " << name << " turned on" << std::endl;
}

void Thermostat::TurnOff() {
    std::cout << "Thermostat " << name << " turned off" << std::endl;
}

void Thermostat::setTemperature(int temperature) {
    this->temperature = temperature;
}

int Thermostat::getTemperature() {
    return temperature;
}

void SmartThermostatA::ThermostatType() {
    std::cout << "Smart Thermostat A" << std::endl;
}

void SmartThermostatB::ThermostatType() {
    std::cout << "Smart Thermostat B" << std::endl;
}