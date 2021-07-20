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
/*
#include <iostream>
#include "Critter.h"
 
using namespace std;
 
void Critter::setName(std::string& newname) {
    name = newname;
}
 
void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}
 
// Setter for the length data member
void Critter::setLength(double newlength) {
    length = newlength;
}
 
// Setter for the hairColor data member
void Critter::setHairColor(std::string& newhairColor) {
    hairColor = newhairColor;
}
 
// Print method to print all the data members of a Critter
void Critter::print() {
    std::cout     << "I am " << name 
                << ". My hunger level is " << hunger << "." 
                << " My length is " << length << "."
                << " My hair color is " << hairColor << "."
                << endl;
}
 
int Critter::getHunger() {
    return hunger;
}
 
// Getter for the length data member
double Critter::getLength() {
    return length;
}
 
// Getter for the hairColor data member
std::string Critter::getHairColor() {
    return hairColor;
}
*/
