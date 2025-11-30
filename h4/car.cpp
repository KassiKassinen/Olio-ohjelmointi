#include "car.h"

Car::Car() {}


Car::Car(string model, string brand) : model(model), brand(brand)
{

}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setEngine(int newHorsepower, double newDisplacement)
{
    objEngine.setHorsepower(newHorsepower);
    objEngine.setDisplacement(newDisplacement);
}

void Car::setWheels(int size, string type)
{
    for (int i = 0; i < 4; i++) {
        objWheel[i].setSize(size);
        objWheel[i].setType(type);
    }
}

void Car::printDetails() const
{
    cout << "Auto : " << model << " " << brand << endl;
    cout << "Moottori : " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << " L" << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Rengas " << i+1 << ":" << objWheel[i].getSize() << " tuumaa, " << objWheel[i].getType() << endl;
    }

}
