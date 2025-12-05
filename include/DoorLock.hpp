#ifndef DOORLOCK_HPP
#define DOORLOCK_HPP
#include "Device.hpp"

class DoorLock : public Device
{
protected:
    bool isOpen = false;

public:
    DoorLock(std::string name) : Device(name) {};
    void TurnOn();
    void TurnOff();
    virtual void LockType() = 0;
    virtual ~DoorLock() = default;
};

class PhilipsDoorLock : public DoorLock {
public:
    PhilipsDoorLock(const std::string& name): DoorLock(name) {};
    void LockType() override;
};

class SamsungDoorLock : public DoorLock {
public:
    SamsungDoorLock(const std::string& name): DoorLock(name) {};
    void LockType() override;
};

#endif