#ifndef Fan_hpp
#define Fan_hpp

#include <stdio.h>

class Fan
{
public:
    bool on;
    int speed;
    double radius;
    
    // Defaut fan
    Fan()
    {
        speed = 1;
        on = false;
        radius = 5;
        
    }
    // Turn on fan
    void turnOn();
     // Turn off fan
    void turnOff();
    // Set new speed
    void setSpeed(int newSpeed);
    // Set radius
    void setRadius(int newRadius);
};

#endif /* Fan_hpp */
