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
/*
#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature() : distance(10) {}

Creature::~Creature() {
    cout << "Destroying Creature!\n";
}

void Creature::setDist(int Distance) {
    distance = Distance;
}

int Creature::getDist() const {
    return distance;
}

void Creature::run() const {
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3) {}

Wizard::~Wizard() {
    cout << "Destroying Wizard!\n";
}

void Wizard::setDistFactor(int DistFactor) {
    distFactor = DistFactor;
}

int Wizard::getDistFactor() const {
    return distFactor;
}

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Hobbit::Hobbit() : caloriesPerDist(11.4) {
    cout << "Constructed Hobbit using empty constructor!\n";
}

Hobbit::~Hobbit() {
    cout << "Destroying Hobbit!\n";
}

void Hobbit::setCaloriesPerDist(double CaloriesPerDist) {
    caloriesPerDist = CaloriesPerDist;
}

double Hobbit::getCaloriesPerDist() const {
    return caloriesPerDist;
}

void Hobbit::caloriesUsed() const {
    cout << "Calories used: " << caloriesPerDist * distance << " calories!\n";
}

Orc::Orc() : basePower(100.0) {
    cout << "Constructed Orc using empty constructor!\n";
}

Orc::~Orc() {
    cout << "Destroying Orc!\n";
}

void Orc::setBasePower(double BasePower) {
    basePower = BasePower;
}

double Orc::getBasePower() const {
    return basePower;
}

void Orc::punchingPower() const {
    cout << "Punching power: " << (basePower - ((basePower / 100) * distance))
         << " power!\n";
}
*/