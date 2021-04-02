/*
CH-230-A
a11_p3.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;

Creature::Creature(): distance(10) {
    cout << "Creating a creature" << endl;
} 
 
Creature::~Creature() {
    cout << "Destroying a creature" << endl;
}
 
void Creature::run() const { 
    cout << "running " << distance << " meters!\n";
}  

Wizard::Wizard() : distFactor(3) {
    cout << "Creating a Wizard" << endl;
}  
 
Wizard::~Wizard() {
    cout << "Destroying a Wizard" << endl;
}
 
void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Archer::Archer() : arrowRange(12) {
    cout << "Creating an Archer" << endl;
}
 
Archer::~Archer() {
    cout << "Destroying an Archer" << endl;
}
 
void Archer::target() const {
    cout << "Targeting " << (arrowRange * distance) << "meters\n";
}

Builder::Builder() : weaponStrength(21) {
    cout << "Creating a Builder." << endl;
}
 
Builder::~Builder() {
    cout << "Destroying a Builder." << endl;
}
 
void Builder::forge() const {
    cout << "Forging " << (weaponStrength * distance) << "weapons.\n";
}
