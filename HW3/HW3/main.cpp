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
    // Turn fan on
    fan1.turnOn();
    // Set speed to 3
    fan1.setSpeed(3);
    // Set radius to 10
    fan1.setRadius(10);
    
    // Fan 2
    Fan fan2;
    // Turn fan off
    fan2.turnOff();
    // Set speed to 2
    fan2.setSpeed(2);
    // Set radius to 5
    fan2.setRadius(5);
    
    // Display fan properties
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
    
    // Check to see if discriminant is positive.
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
    cout << "The even number before 16 is " << num.getPrevious() << " and the even number after 16 is " << num.getNext() << endl << endl;
    
    // 10.4
    // Enter a word
    cout << "Enter a word to be sorted: ";
    cin.ignore();
    cin.getline(word, 50);
    // Get the length of the word
    size = strlen(word);
    // Send to function
    sortString(word, size);
    cout << endl;
    
    // 10.10
    // Have user input a number
    cout << "Enter a number: ";
    int number;
    cin >> number;
    MyInteger number1(number);
    cout << "(0 means false. 1 means true.)" << endl;
    cout << "The number is even. " << number1.isEven() << endl;
    cout << "The number is odd. " << number1.isOdd() << endl;
    cout << "The number is prime. " << number1.isPrime() << endl;
    
    // Set a new number
    MyInteger number2(78);
    cout << "The new number is 78." << endl;
    cout << "The number 78 is even. " << number2.isEven() << endl;
    cout << "The new number 55 is odd. " << number2.isOdd(55) << endl;
    cout << "The new number 79 is prime. " << number2.isPrime(79) << endl;
    cout << number << " is equal to number 2 (78). " << number1.equals(number2) << endl;
    cout << number << " is eqial to 34. " << number1.equals(34) << endl;
    
    
}

void sortString(char word[], int wordLength)
{
    // Loop to sort through letters
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
             // Swap letters
             if (currentMinIndex != i)
             {
                 word[currentMinIndex] = word[i];
                 word[i] = currentMin;
             }
         }
    
    // Display sorted word
    cout << "The sorted string is " << word << endl;
}



