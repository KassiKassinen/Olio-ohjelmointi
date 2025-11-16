#include <iostream>
#include <memory>

#include "car.h"
#include "Rectangle.h"
#include "student.h"

#include <string>
using namespace std;

int main()
{
    /*
    car myCar;

    myCar.setBrand("Opel");
    myCar.setModel("Corsa");
    myCar.setYearModel(2017);

    myCar.printData();


    return 0;
    */


    /*
    rectangle* r = new rectangle;

    r->setWidth(5.0);
    r->setHeight(3.0);

    cout << "Area: " << r->getArea() << endl;
    cout << "circumference: " << r->getCircum() << endl;

    delete r;

    return 0;
    */


    unique_ptr<Student> studentPtr = make_unique<Student>();

    studentPtr->setName("Kassi Kassinen");
    studentPtr->setStudentNumber(123456);
    studentPtr->setAverage(4.25);

    cout << "Nimi: " << studentPtr->getName() << endl;
    cout << "Opiskelijanumero: " << studentPtr->getStudentNumber() << endl;
    cout << "Keskiarvo: " << studentPtr->getAverage() << endl;

    return 0;

}
