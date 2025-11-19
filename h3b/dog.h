#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
protected:

public:
    Dog();
    ~Dog();
    virtual void callOut();
};

#endif // DOG_H
