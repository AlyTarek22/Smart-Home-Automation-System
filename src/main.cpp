
#include "../include/DeviceFactory.hpp"
#include "../include/Light.hpp"
#include "../include/Camera.hpp"
#include "../include/Thermostat.hpp"
#include "../include/HomeController.hpp"
#include "../include/MotionSensor.hpp"
#include "../include/DoorLock.hpp"
#include "../include/DeviceComposite.hpp"
#include "../include/DeviceLeaf.hpp" 
#include "../include/SmartHomeBuilder.hpp" 
#include <iostream>
#include <memory>
int main()
{
    HomeController *homeController = HomeController::getInstance();
    homeController->setFactory(std::make_unique<PhilipsFactory>());
    auto factory = homeController->getFactory();
    homeController->buildHome(std::make_shared<SmartHomeBuilder>(factory));
    auto house = homeController->getHome();
    /*  std::cout << "===== TESTING PHILIPS FACTORY =====\n";

     auto pLight = factory->CreateLight("Philips LED Living Room Light", 80);
     auto pCamera = factory->CreateCamera("Philips Wired Camera");
     auto pThermo = factory->CreateThermostat("Philips Smart Thermostat");
     auto pdoorlock = factory->CreateDoorlock("Philips Smart Doorlock");
     auto pMotionSensor = factory->CreateMotionSensor("Philips Motion Sensor");

     std::cout << "\n-- Testing Philips Light --\n";
     pLight->TurnOn();
     pLight->setBrightness(60);
     std::cout << "Brightness now: " << pLight->getBrightness() << "\n";
     pLight->LightType();
     pLight->TurnOff();

     std::cout << "\n-- Testing Philips Camera --\n";
     pCamera->StartRecording();
     pCamera->StopRecording();
     pCamera->CameraType();

     std::cout << "\n-- Testing Philips Thermostat --\n";
     pThermo->setTemperature(24);
     pThermo->ThermostatType();

     std::cout << "\n-- Testing Philips Doorlock --\n";
     std::cout<<pdoorlock->GetName()<<std::endl;
     pdoorlock->TurnOn();
     pdoorlock->TurnOff();
     pdoorlock->LockType();

     std::cout << "\n-- Testing Philips MotionSensor --\n";
     std::cout<<pMotionSensor->GetName()<<std::endl;
     pMotionSensor->TurnOn();
     pMotionSensor->TurnOff();
     pMotionSensor->SensorType();

     std::cout << "\n\n===== TESTING SAMSUNG FACTORY =====\n";
     HomeController *homeController2 = HomeController::getInstance();
     homeController2->setFactory(std::make_unique<SamsungFactory>());
     auto fac = homeController2->getFactory();
     auto sLight = fac->CreateLight("Samsung Halogen Bedroom Light", 100);
     auto sCamera = fac->CreateCamera("Samsung Wireless Camera");
     auto sThermo = fac->CreateThermostat("Samsung Smart Thermostat");
     auto sdoorlock = fac->CreateDoorlock("Samsung Smart Doorlock");
     auto sMotionSensor = fac->CreateMotionSensor("Samsung Motion Sensor");

     std::cout << "\n-- Testing Samsung Light --\n";
     sLight->TurnOn();
     sLight->setBrightness(40);
     std::cout << "Brightness now: " << sLight->getBrightness() << "\n";
     sLight->LightType();
     sLight->TurnOff();

     std::cout << "\n-- Testing Samsung Camera --\n";
     sCamera->StartRecording();
     sCamera->StopRecording();
     sCamera->CameraType();

     std::cout << "\n-- Testing Samsung Thermostat --\n";
     sThermo->setTemperature(21);

     sThermo->ThermostatType();
     std::cout << "\n-- Testing Samsung Doorlock --\n";
     std::cout<<sdoorlock->GetName()<<std::endl;
     sdoorlock->TurnOn();
     sdoorlock->TurnOff();
     sdoorlock->LockType();

     std::cout << "\n-- Testing Samsung MotionSensor --\n";
     std::cout<<sMotionSensor->GetName()<<std::endl;
     sMotionSensor->TurnOn();
     sMotionSensor->TurnOff();
     sMotionSensor->SensorType(); */
    house->show();

    std::cout << "\n\n===== TEST COMPLETED SUCCESSFULLY =====\n";

    return 0;
}
