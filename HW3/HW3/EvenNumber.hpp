#ifndef EvenNumber_hpp
#define EvenNumber_hpp

#include <stdio.h>

class EvenNumber
{
public:
    int value;
    // no-arg constructor. Create object for value 0
    EvenNumber()
    {
        value = 0;
    }
    
    int x;
    int answer;
    int getValue();
    int getNext();
    int getPrevious();
    void setValue(int newValue);
    
    EvenNumber specifiedNumber(int x);
};

#endif /* EvenNumber_hpp */
