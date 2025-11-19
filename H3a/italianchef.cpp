#include "italianchef.h"
#include <iostream>
using namespace std;



ItalianChef::ItalianChef(string name) : chef(name)
{
  cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef " << name << " makes pasta" << endl;
}
