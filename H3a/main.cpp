#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{

   // chef kokki("Anthony Bourdain");
    ItalianChef iKokki("Anthony Bourdain");

    iKokki.makeSalad();
    iKokki.makeSoup();

    iKokki.makePasta();

   cout << "name of the Italian Chef is " << iKokki.getName() << endl;

    return 0;
}
