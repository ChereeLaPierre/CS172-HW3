#include "EvenNumber.hpp"

// Set a new value
void EvenNumber::setValue(int newValue)
{
    value = newValue;
}

// Show previous even number
int EvenNumber::getPrevious()
{
    if (value % 2 == 0)
    {
        return answer = value - 2;
    }
    else
    {
        return answer = value - 1;
    }
}

// Show next even number
int EvenNumber::getNext()
{
    if (value % 2 == 0)
    {
        return answer = value + 2;
    }
    else
    {
        return answer = value + 1;
    }
}
