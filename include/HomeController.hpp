#ifndef HOMECONTROLLER_HPP
#define HOMECONTROLLER_HPP
#include "DeviceFactory.hpp"
#include "DeviceComposite.hpp"
#include "SmartHomeBuilder.hpp"
#include <memory>
class HomeController
{
    static int count;
    static HomeController* instance;
    std::shared_ptr<DeviceFactory> factory;
     std::shared_ptr<DeviceComposite> house;
    HomeController() {};
    public:
    static HomeController* getInstance();
    void setFactory(std::shared_ptr<DeviceFactory> Factory);
    std::shared_ptr<DeviceFactory> getFactory();

     void buildHome(std::shared_ptr<SmartHomeBuilder> builder);
     std::shared_ptr<DeviceComposite> getHome();

};

#endif