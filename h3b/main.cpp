#include <iostream>
#include "dog.h"
#include "animal.h"

using namespace std;

int main()
{
    Animal animalObj;
    Dog dogObj;

    animalObj.callOut();
    dogObj.callOut();
    return 0;

}
