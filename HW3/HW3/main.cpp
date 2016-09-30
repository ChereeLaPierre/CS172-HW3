#include <iostream>
#include <string>
#include "MyInteger.hpp"
#include "Fan.hpp"
#include "EvenNumber.hpp"
#include "QuadraticEquation.hpp"
using namespace std;

void sortString(char word[], int wordLength);
char word[50];
int size;


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
        cout << "The roots are " << equation.getRoot1() << " and " << equation.getRoot2() << endl << endl;
    }
    
    // 9.11
    // Set value to 16
    EvenNumber num;
    num.setValue(16);
    
    // Show previous and next even number
    cout << "The even number before 16 is " << num.getPrevious() << " and the even number after 16 is " << num.getNext() << endl;
    
    // 10.4
    // Enter a word
    cout << "Enter a word to be sorted: ";
    cin.ignore();
    cin.getline(word, 50);
    size = strlen(word);
    // Send to function
    sortString(word, size);
    
    
    // 10.10
    
    
    
}

void sortString(char word[], int wordLength)
{
    // Sort through letters
    for (int i = 0; i < (size - 1); i++)
         {
             double currentMin = word[i];
             int currentMinIndex = i;
             
             for (int j = i +1; j < size; j++)
             {
                 if (currentMin > word[j])
                 {
                     currentMin = word[j];
                     currentMinIndex = j;
                 }
             }
             
             if (currentMinIndex != i)
             {
                 word[currentMinIndex] = word[i];
                 word[i] = currentMin;
             }
         }
    
    // Display sorted word
    cout << word << endl;
}



