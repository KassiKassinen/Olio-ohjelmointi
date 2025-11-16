#ifndef CAR_H
#define CAR_H
#include <iostream>

#include <string>

using namespace std;

typedef struct car_struct{
private:
    string brand;
    string model;
    int yearModel;
public:
    string getBrand() const {
        return brand;
    }
    void setBrand(string value){
        brand=value;
    }
    string getModel() const {
        return model;
    }
    void setModel(string value){
        model=value;
    }
    int getYearModel() const {
        return yearModel;
    }
    void setYearModel(int value){
        yearModel=value;
    }
    void printData(){
        cout << brand << " " << model << " " << yearModel << endl ;

    }
}
car;

#endif // CAR_H
