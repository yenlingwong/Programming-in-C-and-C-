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
