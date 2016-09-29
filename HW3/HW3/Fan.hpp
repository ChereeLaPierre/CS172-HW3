//
//  Fan.hpp
//  HW3
//
//  Created by Cheree LaPierre on /927/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#ifndef Fan_hpp
#define Fan_hpp

#include <stdio.h>

class Fan
{
public:
    bool on;
    int speed;
    double radius;
    
    Fan()
    {
        speed = 1;
        on = false;
        radius = 5;
        
    }
    
    // Turn on fan
    void turnOn()
    {
        on = true;
    }
    
     // Turn off fan
    void turnOff()
    {
        on = false;
    }
    
    // Set new speed
    void setSpeed(int newSpeed)
    {
        if (on && newSpeed >=1 && newSpeed <= 3)
            speed = newSpeed;
    }
    
    // Set radius
    void setRadius(int newRadius)
    {
        radius = newRadius;
    }
    
};

#endif /* Fan_hpp */
