#include "../include/DoorLock.hpp"

void DoorLock::TurnOn() {
    std::cout << "DoorLock " << name << " turned on" << std::endl;
    isOpen = true;
}

void DoorLock::TurnOff() {
    std::cout << "DoorLock " << name << " turned off" << std::endl;
    isOpen = false;
}

void PhilipsDoorLock::LockType() {
    std::cout << "Philips DoorLock" << std::endl;
}

void SamsungDoorLock::LockType() {
    std::cout << "Samsung DoorLock" << std::endl;
}

