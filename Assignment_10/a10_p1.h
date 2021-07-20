#include <string> // defines standard C++ string class
 
/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    int boredom;
    double height;
 
public: // business logic methods are public
    // setter methods
    void setName(std::string& newname);
    int hunger;
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    // getter method
    int getHunger();
    // service method
    void print();
};
