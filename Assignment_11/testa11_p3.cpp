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
/*#include <iostream>
#include "Creature.h"
using namespace std;

int main() {
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Hobbit.\n";
    Hobbit h;
    h.run();
    h.caloriesUsed();

    cout << "\nCreating an Orc.\n";
    Orc o;
    o.run();
    o.punchingPower();

    return 0;
}
*/