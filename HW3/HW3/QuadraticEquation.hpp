//
//  QuadraticEquation.hpp
//  HW3
//
//  Created by Cheree LaPierre on /927/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

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
        return (b * b - 4 * a * c);
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
