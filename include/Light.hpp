#ifndef LIGHT_HPP
#define LIGHT_HPP
#include "Device.hpp"
class Light : public Device
{
protected:
    int brightness;

public:
    Light(std::string name, int brightnessLevel) : Device(name), brightness(brightnessLevel) {}
    void setBrightness(int brightnessLevel);
    int getBrightness();
    void TurnOn();
    void TurnOff();
   virtual void LightType() = 0;
   virtual ~Light() = default;
};

class LEDLight : public Light
{
public:
    LEDLight(std::string name, int brightnessLevel) : Light(name, brightnessLevel) {}
    void LightType()override ;
};
class HalogenLight : public Light
{
public:
    HalogenLight(std::string name, int brightnessLevel) : Light(name, brightnessLevel) {}
    void LightType() override;
};

#endif
