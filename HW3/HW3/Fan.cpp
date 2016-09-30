#include "Fan.hpp"

// Turn fan on
void Fan::turnOn()
{
    on = true;
}

// Turn fan off
void Fan::turnOff()
{
    on = false;
}

// Set speed of fan
void Fan::setSpeed(int newSpeed)
{
    if (on && newSpeed >=1 && newSpeed <= 3)
        speed = newSpeed;
}

// Set radius of fan
void Fan::setRadius(int newRadius)
{
    radius = newRadius;
}
