#include "car.h"
#include <iostream>

Car::Car(string brand, string model, int yearModel)
    : brand(brand), model(model), yearModel(yearModel)
{
}

void Car::printData() const
{
    cout << "Brand: " << brand
         << ", Model: " << model
         << ", Year: " << yearModel << endl;
}
