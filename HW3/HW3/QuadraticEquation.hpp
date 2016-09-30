#ifndef QuadraticEquation_hpp
#define QuadraticEquation_hpp

#include <stdio.h>
#include <cmath>

class QuadraticEquation
{
private:
    double a;
    double b;
    double c;
    
public:
    QuadraticEquation();
    QuadraticEquation(double CoA, double CoB, double CoC);
    
    // get a
    double getCoefficientA();
    
    //get b
    double getCoefficientB();
    
    //get c
    double getCoefficientC();
    
    //discriminant
    double getDiscriminant()
    {
        return (pow(b, 2) - 4 * a * c);
    }

    //root 1
    double getRoot1();
    
    // root 2
    double getRoot2();
    
    void setCoefficientA(double CoA);
    void setCoefficientB(double CoB);
    void setCoefficientC(double CoC);
    
};

#endif /* QuadraticEquation_hpp */
