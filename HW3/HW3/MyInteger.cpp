#include "MyInteger.hpp"

MyInteger::MyInteger(int newValue)
{
    value = newValue;
}

double MyInteger::getValue()
{
    return value;
}

void MyInteger::setValue(int newValue)
{
    value = newValue;
}

int MyInteger::getValue() const
{
    return value;
}

bool MyInteger::isEven() const
{
    if (value % 2 == 0)
        return true;
    else
        return false;
}

bool MyInteger::isOdd() const
{
    if (value % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool MyInteger::isPrime() const
{
    if ((value == 1) || (value == 2))
    {
        return true;
    }
    
    for (int i = 2; i <= value / 2; i++)
    {
        if (value % i == 0)
            return false;
    }
    
    return true;
}

bool MyInteger::equals(int x)
{
    if (value == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool MyInteger::equals(const MyInteger& y)
{
    if (value == y.getValue())
    {
        return true;
    }
    else
    {
        return false;
    }
}



