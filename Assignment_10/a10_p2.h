/*
CH-230-A
a10_p2.cpp
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
    int hunger;
 
public: // business logic methods are public
    //Critter constructor_critter(std::string name, int boredom, double height, // 
                              //  double health, double weight , int hunger);
    //Critter constructor_critter(std::string name);
    //Critter constructor_critter(std::string name, int hunger, int boredom, double height);
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
