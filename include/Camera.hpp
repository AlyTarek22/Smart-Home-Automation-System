#ifndef CAMERA_HPP
#define CAMERA_HPP
#include "Device.hpp"

class Camera : public Device
{
protected:
    bool isRecording = false;
    bool nightMode = false;

public:
    Camera(std::string name) : Device(name) {}
    void TurnOn();
    void TurnOff();
    void StartRecording();
    void StopRecording();
    void ToggleNightMode();
    virtual void CameraType()=0;
    ~Camera() = default;
};

class WiredCamera : public Camera
{
public:
    WiredCamera(std::string name) : Camera(name) {}
    void CameraType();
    ~WiredCamera() = default;
};
class WirelessCamera : public Camera
{
public:
    WirelessCamera(std::string name) : Camera(name) {}
    void CameraType();
    ~WirelessCamera() = default;
};
#endif