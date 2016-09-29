#include <iostream>
#include "MyInteger.hpp"
#include "Fan.hpp"
#include "EvenNumber.hpp"
#include "QuadraticEquation.hpp"
using namespace std;

int main()
{
    // 9.2
    // Fan 1
    Fan fan1;
    fan1.turnOn();
    fan1.setSpeed(3);
    fan1.setRadius(10);
    
    // Fan 2
    Fan fan2;
    fan2.turnOff();
    fan2.setSpeed(2);
    fan2.setRadius(5);
    
    cout << "The speed of fan 1 is " << fan1.speed << " and the radius is " << fan1.radius << endl;
    cout << "The speed of fan 2 is " << fan2.speed << " and the radius is " << fan2.radius << endl;
    
    // 9.6
    
    
    
    // 10.4
    
}
