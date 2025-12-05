#include "../include/Camera.hpp"

void Camera::TurnOn()
{
    std::cout << "Camera " << name << " turned on" << std::endl;
}

void Camera::TurnOff()
{
    std::cout << "Camera " << name << " turned off" << std::endl;
}

void Camera::StartRecording()
{
    std::cout << "Camera " << name << " started recording" << std::endl;
    isRecording = true;
}

void Camera::StopRecording()
{
    std::cout << "Camera " << name << " stopped recording" << std::endl;
    isRecording = false;
}
void Camera::ToggleNightMode()
{
    if (nightMode)
    {
        std::cout << "Camera " << name << " is already in night mode" << std::endl;
    }
    else
    {

        std::cout << "Camera " << name << " not in night mode" << std::endl;
    }
    nightMode = !nightMode;
}

void WiredCamera::CameraType() { std::cout << "Wired Camera" << std::endl; }
void WirelessCamera::CameraType() { std::cout << "Wireless Camera" << std::endl; }