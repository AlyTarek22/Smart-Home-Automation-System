#include "../include/SmartHomeBuilder.hpp"
#include "../include/Adaptee.hpp"
#include "../include/Adapter.hpp"

std::shared_ptr<DeviceComposite> SmartHomeBuilder::buildDefaultHome()
{

    auto house = std::make_shared<DeviceComposite>("House");

    auto firstFloor = std::make_shared<DeviceComposite>("FirstFloor");
    auto secondFloor = std::make_shared<DeviceComposite>("SecondFloor");

    house->AddDevice(firstFloor);
    house->AddDevice(secondFloor);

    // -------------------------
    //       LIVING ROOM
    // -------------------------
    auto livingRoom = std::make_shared<DeviceComposite>("LivingRoom");

    livingRoom->AddDevice(
        std::make_shared<DeviceLeaf>(
            factory->CreateLight("LivingRoom Light 1")));

    livingRoom->AddDevice(
        std::make_shared<DeviceLeaf>(
            factory->CreateLight("LivingRoom Light 2")));

    livingRoom->AddDevice(
        std::make_shared<DeviceLeaf>(
            factory->CreateCamera("LivingRoom Camera")));

    livingRoom->AddDevice(
        std::make_shared<DeviceLeaf>(
            factory->CreateThermostat("LivingRoom Thermostat")));
/*For testing adapter */
/*     auto light1_adaptee = new LightAdaptee();
    auto light1 = std::make_shared<LightAdapter>("LivingRoom newwwww", 80, light1_adaptee);

    livingRoom->AddDevice(std::make_shared<DeviceLeaf>(light1)); */
    firstFloor->AddDevice(livingRoom);

    // -------------------------
    //          KITCHEN
    // -------------------------
    auto kitchen = std::make_shared<DeviceComposite>("Kitchen");

    kitchen->AddDevice(
        std::make_shared<DeviceLeaf>(
            factory->CreateLight("Kitchen Light 1")));

    firstFloor->AddDevice(kitchen);

    // -------------------------
    //         BEDROOM
    // -------------------------
    auto bedroom = std::make_shared<DeviceComposite>("BedRoom");

    bedroom->AddDevice(
        std::make_shared<DeviceLeaf>(
            factory->CreateLight("BedRoom Light")));

    bedroom->AddDevice(
        std::make_shared<DeviceLeaf>(
            factory->CreateThermostat("BedRoom Thermostat")));

    bedroom->AddDevice(
        std::make_shared<DeviceLeaf>(
            factory->CreateMotionSensor("MotionSensor")));

    auto bathroom = std::make_shared<DeviceComposite>("BathRoom");
    bathroom->AddDevice(
        std::make_shared<DeviceLeaf>(
            factory->CreateLight("Bathroom Light 1")));
    secondFloor->AddDevice(bedroom);
    secondFloor->AddDevice(bathroom);

    return house;
}
