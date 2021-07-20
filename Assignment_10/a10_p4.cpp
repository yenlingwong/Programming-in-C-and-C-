/*
CH-230-A
a10_p4.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/
 
#include <iostream>
#include "Critter.h"
 
//using namespace std;
 
Critter::Critter() {
    std::cout << "Default Constructor called!\n" << std::endl;
    name = "default_critter";
    boredom = 0;
    height = 5;
    health = 0;
    weight = 0;
    hunger = 0;
}
// Default Constructor
 
Critter::Critter(std::string &newname) {
    std::cout << "Constructor with name as parameter called!\n" << std::endl;
    name = newname;
    boredom = 0;
    height = 5;
    health = 0;
    weight = 0;
    hunger = 0;
}
// Constructor with only name as argument
 
Critter::Critter(std::string &newname, int newboredom, double newhealth, double newweight, int newhunger, double newheight){
    std::cout << "Constructor with all parameters called! Default Height set to 10 in header\n" << std::endl;
    name = newname;
    boredom = newboredom;
    health = newhealth;
    weight = newweight;
    hunger = newhunger;
    height = newheight;
}
// Constructor with all the arguments
 
void Critter::setName(std::string& newname) {
    name = newname;
}
 
void Critter::setHealth(double newhealth) {
    health = newhealth;
}
 
void Critter::setWeight(double newweight) {
    weight = newweight;
}
// Setter Methods
 
void Critter::print() {
    std::cout << "I am " << name << ". My hunger level is " << hunger << "." << std::endl;
    std::cout << "My health level is " << health << "." << std::endl;
    std::cout << "My weight is " << weight << "." << std::endl;
    std::cout << "My height is " << height << "." << std::endl;
    std::cout << "My boredom level is " << boredom << "." << std::endl;
}
// Printer Methods
 
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
