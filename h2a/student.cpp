#include <iostream>
#include <memory>


#include "student.h"
int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}
