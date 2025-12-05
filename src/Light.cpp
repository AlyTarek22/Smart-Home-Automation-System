#include "../include/Light.hpp"

void Light::setBrightness(int brightnessLevel) {
    brightness = brightnessLevel;
}

int Light::getBrightness() {
    return brightness;
}

void Light::TurnOn() {
    std::cout << "Light " << name << " turned on" << std::endl;
}

void Light::TurnOff() {
    std::cout << "Light " << name << " turned off" << std::endl;
}

void Light::LightType() {}
void LEDLight::LightType() { std::cout << "LED Light" << std::endl; }
void HalogenLight::LightType() { std::cout << "Halogen Light" << std::endl; }
