#ifndef DEVICECOMPONENT_HPP
#define DEVICECOMPONENT_HPP

class DeviceComponent
{
public:
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual ~DeviceComponent() = default;
    virtual void show()=0;
};

#endif