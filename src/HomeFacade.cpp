#include "../include/Homefacade.hpp"
HomeFacade::HomeFacade(){
    controller = HomeController::getInstance();
}

void HomeFacade::buildHome(){
    controller->setFactory(std::make_unique<PhilipsFactory>());
    auto factory = controller->getFactory();
    controller->buildHome(std::make_shared<SmartHomeBuilder>(factory));
    house = controller->getHome();
}
void HomeFacade::TurnOnLivingRoom(){
    auto livingRoom=house->Find("LivingRoom");
    livingRoom->TurnOn();
}
void HomeFacade::TurnOnBathRoom(){
    auto bathRoom=house->Find("BathRoom");
    bathRoom->TurnOn();
}
void HomeFacade::TurnOnBEDRoom(){
    auto bedRoom=house->Find("BedRoom");
    bedRoom->TurnOn();
}
void HomeFacade::TurnOnKitchen(){
    auto kitchen=house->Find("Kitchen");
    kitchen->TurnOn();
}
void HomeFacade::TurnOnAllRooms(){
    auto firstFloor=house->Find("FirstFloor");
    firstFloor->TurnOn();
    auto secondFloor=house->Find("SecondFloor");
    secondFloor->TurnOn();
    
}
void HomeFacade::TurnOnFirstFloor(){
    auto firstFloor=house->Find("FirstFloor");
    firstFloor->TurnOn();
}
void HomeFacade::TurnOnSecondFloor(){
    auto secondFloor=house->Find("SecondFloor");
    secondFloor->TurnOn();
}
void HomeFacade::TurnOnAllFloors(){
    auto firstFloor=house->Find("FirstFloor");
    firstFloor->TurnOn();
    auto secondFloor=house->Find("SecondFloor");
    secondFloor->TurnOn();
}
void HomeFacade::TurnOnAllSecurties(){
    house->TurnOnSecurity();
}

void HomeFacade::TurnOnFirstFloorLights(){
    auto firstFloor=house->Find("FirstFloor");
    firstFloor->TurnOnLight();
}
void HomeFacade::TurnOnSecondFloorLights(){
    auto secondFloor=house->Find("SecondFloor");
    secondFloor->TurnOnLight();
}
void HomeFacade::TurnOnFirstFloorSecurties(){
    auto firstFloor=house->Find("FirstFloor");
    firstFloor->TurnOnSecurity();
}
void HomeFacade::TurnOnSecondFloorSecurties(){
    auto secondFloor=house->Find("SecondFloor");
    secondFloor->TurnOnSecurity();
}
