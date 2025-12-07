#include <iostream>
#include "classb.h"
#include "classa1.h"
#include "classa2.h"



using namespace std;

int main()
{
    int a = 5;
    int* pointerA;
    int& refA = a;

    int b = 6;

    pointerA = &a;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << endl;

    cout << "Pointterin osoittama osoite on: " << pointerA << " ja muistipaikan arvo on: " << *pointerA << endl;
    cout << endl;

    cout << "refA osoittaa osoitteeseen: " << &refA << " ja osoittaman muistipaikan arvo on: " << refA << endl;

    //Lisää muuttuja int muuttuja b ja anna sen arvoksi 6.
    //Kokeile voitko muuttaa refA:n osoittamaan b:n osoitteeseen?
    //Kokeile voitko muuttaa pointerA:n osoittamaan b:n osoitteeseen?

    pointerA = &b;
    refA = b;
    cout << endl;
    cout << endl;

    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;
    cout << endl;

    cout << "Pointterin osoittama osoite on: " << pointerA << " ja muistipaikan arvo on: " << *pointerA << endl;
    cout << endl;

    cout << "refA osoittaa osoitteeseen: " << &refA << " ja osoittaman muistipaikan arvo on: " << refA << endl;
    //ilmeisesti viitattavaa osoitetta ei voi muuttaa, mutta viittauksella voi kopioida b:n arvon a:han

    // olio argumenttina alhaalla

    cout << endl;
    cout << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    //  Referenssi armenttina alhaalla
    cout << endl;
    cout << endl;

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
