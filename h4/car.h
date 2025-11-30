#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"

using namespace std;

class Car
{
private:
    Engine objEngine;
    Wheel objWheel[4];

    string model;
    string brand;

public:
    Car();
    Car(string, string);

    void setEngine(int, double);
    void setWheels(int, string);



    string getModel() const;
    void setModel(const string &newModel);

    string getBrand() const;
    void setBrand(const string &newBrand);

    void printDetails() const;
};

#endif // CAR_H
