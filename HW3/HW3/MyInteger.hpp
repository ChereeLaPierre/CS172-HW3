#ifndef MyInteger_hpp
#define MyInteger_hpp

#include <stdio.h>

class MyInteger
{
private:
    int value;
    
public:
    MyInteger();
    MyInteger(int newValue);
    void setValue(int newValue);
    double getValue();
    
    int getValue() const;
    bool isEven() const;
    bool isOdd() const;
    bool isPrime() const;
    bool equals(int x);
    bool equals(const MyInteger& y);
    
    static bool isEven(int n)
    {
        if (n % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    static bool isOdd(int b)
    {
        if (b % 2 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    static bool isPrime(int num)
    {
        if ((num == 1) || (num == 2))
        {
            return true;
        }
        
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
                return false;
        }
        
        return true;    }
    
    static bool isEven(const MyInteger& a)
    {
        if (a.getValue() % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    static bool isOdd(const MyInteger& a)
    {
        if (a.getValue() % 2 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    static bool isPrime(const MyInteger& a)
    {
        if ((a.getValue() == 1) || (a.getValue() == 2))
        {
            return true;
        }
        
        for (int i = 2; i <= a.getValue() / 2; i++)
        {
            if (a.getValue() % i == 0)
                return false;
        }
        
        return true;
    }
};

#endif /* MyInteger_hpp */
