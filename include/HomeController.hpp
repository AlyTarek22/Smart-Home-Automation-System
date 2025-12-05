#ifndef HOMECONTROLLER_HPP
#define HOMECONTROLLER_HPP
#include "DeviceFactory.hpp"
#include <memory>
class HomeController
{
    static int count;
    static HomeController* instance;
    std::shared_ptr<DeviceFactory> factory;
    HomeController() {};
    public:
    static HomeController* getInstance();
    void setFactory(std::shared_ptr<DeviceFactory> Factory);
    std::shared_ptr<DeviceFactory> getFactory();

};

#endif