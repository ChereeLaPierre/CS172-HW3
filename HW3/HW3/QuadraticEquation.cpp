#include "QuadraticEquation.hpp"

QuadraticEquation::QuadraticEquation(double CoA, double CoB, double CoC)
{
    a = CoA;
    b = CoB;
    c = CoC;
}

double QuadraticEquation::getCoefficientA()
{
    return a;
}

double QuadraticEquation::getCoefficientB()
{
    return b;
}

double QuadraticEquation::getCoefficientC()
{
    return c;
}

void QuadraticEquation::setCoefficientA(double CoA)
{
    a = CoA;
}

void QuadraticEquation::setCoefficientB(double CoB)
{
    a = CoB;
}

void QuadraticEquation::setCoefficientC(double CoC)
{
    a = CoC;
}

// Check to see if discriminant is positive and if it is return root
double QuadraticEquation::getRoot1()
{
    if (getDiscriminant() < 0)
    {
        return 0;
    }
    else
        return ((-b) + sqrt(getDiscriminant()))/(2 * a);
}
// Check to see if discriminant is positive and if it is return root
double QuadraticEquation::getRoot2()
{
    if (getDiscriminant() < 0)
    {
        return 0;
    }
    else
        return ((-b) - sqrt(getDiscriminant()))/(2 * a);
}


