#include "../include/HomeController.hpp"
#include <iostream>
int HomeController::count = 0;
HomeController* HomeController::instance = nullptr;
HomeController* HomeController::getInstance()
{
    if (count == 0)
    {
        instance = new HomeController();
        count++;
        std::cout<<"Instance created"<<std::endl;
    }
    else{
        std::cout<<"Instance already created"<<std::endl;
    }
    return instance;
}
void HomeController::setFactory(std::shared_ptr<DeviceFactory> Factory)
{
    this->factory = Factory;
}
std::shared_ptr<DeviceFactory> HomeController::getFactory()
{
    return this->factory;
}