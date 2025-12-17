#ifndef ADAPTEE_HPP
#define ADAPTEE_HPP

class ThermostatAdaptee
{
    int temperature;

public:
    ThermostatAdaptee(int temperature = 50) : temperature(temperature) {}
    void TurnOn();
    void TurnOff();
    void setTemperature(int temperature);
    int getTemperature();
};
class CameraAdaptee
{
protected:
    bool isRecording = false;

public:
    CameraAdaptee() {}
    void TurnOn();
    void TurnOff();
    void StartRecording();
    void StopRecording();
};
/* class MotionSensorAdaptee{

}; */
class DoorlockAdaptee
{
    bool isOpen = false;

public:
    DoorlockAdaptee() {};
    void TurnOn();
    void TurnOff();
};
class LightAdaptee
{
private:
    int brightness;

public:
    LightAdaptee() { brightness = 50; }
    void setBrightness(int brightnessLevel);
    int getBrightness();
    void TurnOn();
    void TurnOff();
};
#endif