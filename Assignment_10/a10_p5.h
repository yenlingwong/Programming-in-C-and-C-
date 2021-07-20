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
/*
#include <string> // defines standard C++ string class

class Critter {
    private: // data members are private
        std::string name;
        double hunger; // hunger is stored as a double type
        int boredom;
        double height;

        // Methods to convert from int to double and from double to int

        // Method to convert data member double to int using casting as int and
        // multiplication by 10
        int convertUncover();
        // Method to convert inputted int to double using casting as double and
        // division by 10
        double convertHide(int Hunger);

    public:
        // Constructors
        // Construct Critter object with all parameters supplied
        // In case height is ommited, set height to default value 10
        Critter(std::string Name, int Hunger, int Bored, double Height = 10.0);
        // Construct Critter object with name parameter supplied
        Critter(std::string Name);
        // Construct Critter with no parameters supplied
        Critter();

        // setter methods
        void setName(std::string &newName);
        void setHunger(int newHunger);
        void setBoredom(int newBoredom);
        void setHeight(double newHeight);

        // getter methods
        std::string getName();
        int getHunger();
        int getBoredom();
        double getHeight();

        // service method
        void print();
};
*/