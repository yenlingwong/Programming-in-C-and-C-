/*
CH-230-A
a11_p3.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;
int main() { 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();
    c.~Creature();
    cout << "Creature Destoyed.\n";
 
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
    w.~Wizard();
    cout << "Wizard Destroyed.\n";
 
    cout << "\nCreating an Archer.\n";
    Archer a;
    a.run();
    a.target();
    a.~Archer();
    cout << "Archer Destroyed.\n";
 
    cout << "\nCreating a Builder.\n";
    Builder b;
    b.run();
    b.forge();
    b.~Builder();
    cout << "Builder Destroyed.\n";
 
    return 0;
}
