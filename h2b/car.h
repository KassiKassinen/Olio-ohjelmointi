#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:

    Car(string brand, string model, int yearModel);


    void printData() const;
};



#endif // CAR_H
