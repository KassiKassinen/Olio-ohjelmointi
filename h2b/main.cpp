#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{

    vector<Car> carList;

    carList.emplace_back("Toyota", "Corolla", 2010);
    carList.emplace_back("Opel", "Corsa", 2017);
    carList.emplace_back("Opel", "Insignia", 2022);

    cout << "Toisen auton tiedot:" << endl;
    carList[1].printData();

    cout << "\nKaikki autot listassa:" << endl;
    for (const auto &car : carList) {
        car.printData();
    }

    return 0;
}
