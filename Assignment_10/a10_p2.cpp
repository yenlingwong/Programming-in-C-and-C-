/*
CH-230-A
a10_p2.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/
 
#include <iostream>
#include "Critter.h"
 
//using namespace std;
 
void Critter::setName(std::string& newname) {
    name = newname;
}
 
void Critter::setHealth(double newhealth) {
    health = newhealth;
}
 
void Critter::setWeight(double newweight) {
    weight = newweight;
}
 
void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}
// Setter Methods
 
 
void Critter::print() {
    std::cout << "I am " << name << ". My hunger level is " << hunger << "." << std::endl;
    std::cout << "My health level is " << health << "." << std::endl;
    std::cout << "My weight is " << weight << "." << std::endl;
}
// Print Method
 
int Critter::getHunger() {
    return hunger;
}
 
double Critter::getHealth() {
    return health;
}
 
double Critter::getWeight() {
    return weight;
}
// Getter Methods
