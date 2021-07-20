#include <iostream>
#include "Critter.h"
 
//using namespace std;
 
void Critter::setName(std::string& newname) {
    name = newname;
}
 
void Critter::print() {
    std::cout << "I am " << name << ". My hunger level is " << hunger << "." << std::endl;
}
 
int Critter::getHunger() {
    return hunger;
}

/*
#include <string> // defines standard C++ string class
*/
/* First C++ class */
/*
class Critter
{
private:  // data members are private
    int hunger;
    int boredom;
    double height;
	std::string name;
public: // business logic methods are public
    // setter methods
    void setName(std::string& newname) {
        name = newname;
    }
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    // getter method
    int getHunger();
    // service method
    void print();
};
*/