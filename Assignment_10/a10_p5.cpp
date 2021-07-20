/*
CH-230-A
a10_p5.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/
 
#include <iostream>
#include "Critter.h"
 
//using namespace std;
 
Critter::Critter() {
    name = "default_critter";
    boredom = 0;
    height = 5;
    health = 0;
    weight = 0;
    hunger = 0;
}
// Default Constructor
 
Critter::Critter(std::string &newname) {
    name = newname;
    boredom = 0;
    height = 5;
    health = 0;
    weight = 0;
    hunger = 0;
}
// Constructor with only name as argument
 
Critter::Critter(std::string &newname, int newboredom, double newhealth, double newweight, int newhunger, double newheight){
 
    name = newname;
    boredom = newboredom;
    health = newhealth;
    weight = newweight;
    hunger = toDouble(newhunger);
    height = newheight;
}
// Constructor with all arguments
 
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
    hunger = toDouble(newhunger);
    std::cout << " hunger is " << hunger << std::endl;
}
// Setter Methods

void Critter::print() {
    std::cout << "I am " << name << ". My hunger level is " << hunger << "." << std::endl;
    std::cout << "My health level is " << health << "." << std::endl;
    std::cout << "My weight is " << weight << "." << std::endl;
    std::cout << "My height is " << height << "." << std::endl;
    std::cout << "My hunger level is " << hunger << "." << std::endl;
}
// Printer Methods
 
int Critter::getHunger() {
    return toInteger();
}
// return the value from the toInteger() function
 
double Critter::toDouble(int newhunger) {
    return (((double)newhunger) / 10);
}
// Converting to double
 
int Critter::toInteger(){
    return ((int) (hunger * 10));
}
// Converting back to integers
 
double Critter::getHealth() {
    return health;
}
 
double Critter::getWeight() {
    return weight;
}
// Getter Methods
