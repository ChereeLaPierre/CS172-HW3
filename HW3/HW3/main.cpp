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
    cout << "The speed of fan 2 is " << fan2.speed << " and the radius is " << fan2.radius << endl << endl;
    
    // 9.6
    // Enter a, b, c values
    cout << "Enter value for a: ";
    double coefficientA;
    cin >> coefficientA;
    cout << "Enter value for b: ";
    double coefficientB;
    cin >> coefficientB;
    cout << "Enter value for c: ";
    double coefficientC;
    cin >> coefficientC;
    
    // Create an equation
    QuadraticEquation equation(coefficientA, coefficientB, coefficientC);
    double discriminant;
    
    // Check to see if discriminant is positive
    discriminant = equation.getDiscriminant();
    if (discriminant < 0)
    {
        cout << "The equation has no real roots" << endl;
    }
    else
    {
    // Show answer;
        cout << "The roots are " << equation.getRoot1() << " and " << equation.getRoot2() << endl;
    }
    
    // 10.4
    
}
