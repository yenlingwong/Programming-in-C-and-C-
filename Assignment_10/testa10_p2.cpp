/*
CH-230-A
a10_p1.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/
 
#include <iostream>
#include <cstdlib>
#include "Critter.h"
 
//using namespace std;
 
int main(int argc, char** argv)
{
    Critter c;
 
    std::string name;
    int hunger;
    double health;
    double weight;
    // Declaring Variables for each Property
 
    std::cout << std::endl << "Please enter data: " << std::endl;
    std::cout << "Name: ";
    getline(std::cin, name);
 
    std::cout << "Hunger: ";
    std::cin >> hunger;
    std::cout << "Health: ";
    std::cin >> health;
    std::cout << "Weight: ";
    std::cin >> weight;
    // Reading input from keyboard
 
    c.setName(name);
    c.setHunger(hunger);
    c.setHealth(health);
    c.setWeight(weight);
    // All getter methods
 
    std::cout << "You have created:" << std::endl;
    c.print();
 
    return 0;
}
/*
#include <iostream>
#include <cstdlib>
#include "Critter.h"
 
using namespace std;
 
int main(int argc, char** argv)
{
    Critter c;
 
    string name, hairColor;
    int hunger;
    double length;
 
    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    c.setName(name);
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);
    
    cout << "Length: ";
    cin >> length;
    c.setLength(length);
    cout << "Hair Color: ";
    cin >> hairColor;
    c.setHairColor(hairColor);
 
    cout << "You have created:" << endl;
    c.print();
        return 0;
}
*/