/*
CH-230-A
a10_p3.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

void City::setName(string &newName) {
    name = newName;
}

void City::setInhabitants(int newInhabitants) {
    inhabitants = newInhabitants;
}

void City::setMayor(string newMayor) {
    mayor = newMayor;
}

void City::setArea(double newArea) {
    area = newArea;
}

// Setter Methods

void City::print() {
    cout << "The name of the city is: " << name << endl;
    cout << "The total number of inhabitants: " << inhabitants << endl;
    cout << "The mayor is: " << mayor << endl;
    cout << "The area of the city is: " << area << endl;
}
// Printer Method

string City::getName() {
    return name;
}

int City::getInhabitants() {
    return inhabitants;
}

string City::getMayor() {
    return mayor;
}

double City::getArea() {
    return area;
}
// Getter Method
