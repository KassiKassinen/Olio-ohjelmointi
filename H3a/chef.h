#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;


class chef
{    

private:

protected:
    string name;

public:
    chef(string name);
    ~chef();

    void makeSalad();
    void makeSoup();

};

#endif // CHEF_H
