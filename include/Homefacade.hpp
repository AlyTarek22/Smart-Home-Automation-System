#ifndef HOMEFACADE_HPP
#define HOMEFACADE_HPP
#include "HomeController.hpp"
class HomeFacade
{
    HomeController *controller;           
    std::shared_ptr<DeviceComposite> house;

public:
HomeFacade();
void buildHome();
/* void TurnOnAllDevices();
void TurnOffAllDevices();
void TurnOnLight();
void TurnOffLight();
void TurnOnSecurity();
void TurnOffSecurity();
void TurnOnLightFirstFloor();
void TurnOnLightSecondFloor(); */
   void TurnOnLivingRoom();
   void TurnOnBathRoom();
   void TurnOnBEDRoom();
   void TurnOnKitchen();
   void TurnOnAllRooms();
   void TurnOnFirstFloor();
   void TurnOnSecondFloor();
   void TurnOnAllFloors();
   void TurnOnAllSecurties();
   void TurnOnFirstFloorLights();
   void TurnOnSecondFloorLights();
   void TurnOnFirstFloorSecurties();
   void TurnOnSecondFloorSecurties();

};

#endif