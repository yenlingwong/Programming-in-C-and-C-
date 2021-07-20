/*
CH-230-A
a10_p5.h
Yen Ling Wong
ywong@jacobs-university.de
*/
 
#include <string> // defines standard C++ string class
 
/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    int boredom;
    double height;
    double health;
    double weight;
    double hunger;
    int toInteger();
    double toDouble(int newhunger);
 
public: // business logic methods are public
    Critter();
    Critter(std::string &newname);
    Critter(std::string &newname, int newboredom, double newhealth, double newweight, 
        int newhunger, double newheight = 10.0);
    // setter methods
    
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHealth(double newhealth);
    void setWeight(double newweight);
 
    // getter method
    int getHunger();
    double getHealth();
    double getWeight();
    // service method
    void print();
    
};
