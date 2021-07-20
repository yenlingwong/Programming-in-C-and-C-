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
/*
#include <iostream>
#include "Critter.h"
 
using namespace std;

// Construct Critter object with all parameters supplied
// In case height is ommited, set height to default value 10
Critter::Critter(string Name, int Hunger, int Bored, double Height) {
    cout << "Constructor supplied with all parameters\n";
	name = Name;
	hunger = convertHide(Hunger);
	boredom = Bored;
	height = Height;
}

// Construct Critter object with name parameter supplied
Critter::Critter(string Name) : name(Name) {
    cout << "Constructor supplied with only 1 parameter\n";
	hunger = 0;
	boredom = 0;
	height = 5;
}

// Construct Critter with no parameters supplied
Critter::Critter() {
    cout << "Constructor supplied with no parameters\n";
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
}

// Setter methods for each data member of Critter class
void Critter::setName(std::string& newName) {
    name = newName;
}
 
void Critter::setHunger(int newHunger) {
    hunger = convertHide(newHunger);
}

void Critter::setBoredom(int newBoredom) {
    boredom = newBoredom;
}

void Critter::setHeight(double newHeight) {
    height = newHeight;
}

// Getter methods for each data member of Critter class
string Critter::getName() {
    return name;
}
 
int Critter::getHunger() {
    return convertUncover();
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}

// Methods used to hide information

int Critter::convertUncover() {
	// Return the int casted value of multiplication of hunger and 10
	// To go from 1.0 as value of data member to 10, 0.5 to 5, and so on...
    return ((int) (hunger * 10));
}

double Critter::convertHide(int Hunger) {
	// Return the double casted value of divison of hunger and 10
	// To go from 10 as input to 1.0, 5 to 0.5, and so on...
    return (((double) Hunger) / 10);
}

// Method print outputs each data members' value through the getter methods
void Critter::print() {
	cout << "Name: "
		 << getName()
		 << "\nHunger: "
		 << getHunger()
		 << "\nBoredom: "
		 << getBoredom()
		 << "\nHeight: "
		 << getHeight()
		 << endl;
}
*/