
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
#include "../include/HomeFacade.hpp"
#include "../include/Adaptee.hpp"
#include "../include/Adapter.hpp"
#include <iostream>
#include <memory>
int main()
{
/*          HomeController *homeController = HomeController::getInstance();
        homeController->setFactory(std::make_unique<PhilipsFactory>());
        auto factory = homeController->getFactory();
        homeController->buildHome(std::make_shared<SmartHomeBuilder>(factory));
        auto house = homeController->getHome();  */
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
    //  house->show();
    //  house->TurnOnLight();
    // auto firstFloor = house->Find("FirstFloor");
    //  auto SecondFloor=house->Find("SecondFloor");
    //  auto light1=firstFloor->Find("LivingRoom Light 1");
    //  auto light2=SecondFloor->Find("BedRoom Light");

    //  auto livingroom=house->Find("LivingRoom");
    //  firstFloor->show();
    //  firstFloor->TurnOnLight();
    //  light1->TurnOnLight();
    //  livingroom->TurnOnLight();

    //  light2->TurnOnLight();
    //  light2->TurnOffLight();

    // auto cameraleaf = firstFloor->Find("LivingRoom Camera");
    // cameraleaf->TurnOnSecurity();
    // house->TurnOnSecurity();
    // house->TurnOffSecurity();
    //  auto Light1=firstFloor->Find("LivingRoom Light 1");
    //  Light1->TurnOffLight();
    // house->TurnOnLight();
    // house->TurnOffLight();

    /*      std::cout<<"Testing Security System in first floor (Camera)\n";
         firstFloor->TurnOnSecurity();

         std::cout<<"Testing Security System Disabling\n";
         firstFloor->TurnOffSecurity();

         std::cout<<"Testing Security System in Second floor (MotionSensor)\n";
         SecondFloor->TurnOnSecurity();

         std::cout<<"Testing Security System Disabling\n";
         SecondFloor->TurnOffSecurity(); */

/*              HomeFacade homefacade;
              homefacade.buildHome();
             std::cout << "\n\n===== TESTING HOME FACADE =====\n";
             std::cout << "\n\n===== TESTING TurnOnAllFloors =====\n";
             homefacade.TurnOnAllFloors();

             std::cout << "\n\n===== TESTING TurnOnAllRooms =====\n";
             homefacade.TurnOnAllRooms();

             std::cout << "\n\n===== TESTING TurnOnBathroom =====\n";
             homefacade.TurnOnBathRoom();

             std::cout << "\n\n===== TESTING TurnOnBEDRoom =====\n";
             homefacade.TurnOnBEDRoom();

             std::cout << "\n\n===== TESTING TurnOnKitchen =====\n";
             homefacade.TurnOnKitchen(); 

             std::cout << "\n\n===== TESTING TurnOnLivingRoom =====\n";
             homefacade.TurnOnLivingRoom(); */

/*              std::cout << "\n\n===== TESTING TurnOnAllSecurties =====\n";
             homefacade.TurnOnAllSecurties();

             std::cout << "\n\n===== TESTING TurnOnFirstFloorLights =====\n";
             homefacade.TurnOnFirstFloorLights();

             std::cout << "\n\n===== TESTING TurnOnSecondFloorLights =====\n";
             homefacade.TurnOnSecondFloorLights();

             std::cout << "\n\n===== TESTING TurnOnFirstFloorSecurties =====\n";
             homefacade.TurnOnFirstFloorSecurties();

             std::cout << "\n\n===== TESTING TurnOnSecondFloorSecurties =====\n";
             homefacade.TurnOnSecondFloorSecurties();  */
    /* ThermostatAdaptee *ThermostatA = new ThermostatAdaptee();
    Thermostat *NewThermostatA = new ThermostatAdapter("New Smart Thermostat A",ThermostatA);
    NewThermostatA->TurnOn(); */
    // Living Room
    
    std::cout << "\n\n===== TEST COMPLETED SUCCESSFULLY =====\n";

    return 0;
}
