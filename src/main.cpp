
#include "../include/DeviceFactory.hpp"
#include "../include/Light.hpp"
#include "../include/Camera.hpp"
#include "../include/Thermostat.hpp"
#include "../include/HomeController.hpp"
#include "../include/MotionSensor.hpp"
#include "../include/DoorLock.hpp"
#include "../include/DeviceComposite.hpp"
#include "../include/DeviceLeaf.hpp"
#include <iostream>
#include <memory>
int main()
{
    HomeController *homeController = HomeController::getInstance();
    homeController->setFactory(std::make_unique<PhilipsFactory>());
    auto factory = homeController->getFactory();
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
    std::shared_ptr<DeviceComposite>House=std::make_shared<DeviceComposite>("House");
    std::shared_ptr<DeviceComposite>FirstFloor=std::make_shared<DeviceComposite>("FirstFloor");
    std::shared_ptr<DeviceComposite>SecondFloor=std::make_shared<DeviceComposite>("SecondFloor");
    House->AddDevice(FirstFloor);
    House->AddDevice(SecondFloor);
    
    std::shared_ptr<DeviceComposite>LivingRoom=std::make_shared<DeviceComposite>("LivingRoom");
    std::shared_ptr<DeviceLeaf>Light1=std::make_shared<DeviceLeaf>(" Living Room Light1");
    std::shared_ptr<DeviceLeaf>Light2=std::make_shared<DeviceLeaf>(" Living Room Light2");
    std::shared_ptr<DeviceLeaf>Camera=std::make_shared<DeviceLeaf>(" Living Room Camera");
    std::shared_ptr<DeviceLeaf>Thermostatt=std::make_shared<DeviceLeaf>(" Living Room Thermostatt");
    
    LivingRoom->AddDevice(Light1);
    LivingRoom->AddDevice(Light2);
    LivingRoom->AddDevice(Camera);
    LivingRoom->AddDevice(Thermostatt);
    
    std::shared_ptr<DeviceComposite>Kitchen=std::make_shared<DeviceComposite>("Kitchen");
    
    
    
    std::shared_ptr<DeviceComposite>SecondFloor=std::make_shared<DeviceComposite>("SecondFloor");
    std::shared_ptr<DeviceComposite>BedRoom=std::make_shared<DeviceComposite>("BedRoom");
    std::shared_ptr<DeviceLeaf>Light=std::make_shared<DeviceLeaf>(" BedRoom Light");
    std::shared_ptr<DeviceLeaf>Thermostattt=std::make_shared<DeviceLeaf>("Thermostat");
    std::shared_ptr<DeviceLeaf>Sensor=std::make_shared<DeviceLeaf>("Sensor");
    
    BedRoom->AddDevice(Light);
    BedRoom->AddDevice(Thermostattt);
    BedRoom->AddDevice(Sensor);
    std::shared_ptr<DeviceComposite>BathRoom=std::make_shared<DeviceComposite>("BathRoom");


    std::cout << "\n\n===== TEST COMPLETED SUCCESSFULLY =====\n";

    return 0;
}
