#include <iostream>
#include <cstdlib>
#include "Critter.h"
 
//using namespace std;
void setHunger(int newhunger, Critter &c) {
    c.hunger = newhunger;
}
 
int main(int argc, char** argv)
{
    Critter c;
 
    std::string name;
    int hunger;
 
    std::cout << std::endl << "Please enter data: " << std::endl;
    std::cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(std::cin, name);
    c.setName(name);
    c.setName(name);
    std::cout << "Hunger: ";
    std::cin >> hunger;
    setHunger(hunger, c);
    // Remove c since its not a method of the class
 
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
 
    string name;
    int hunger;
 
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
 
    cout << "You have created:" << endl;
    c.print();
        return 0;
}
*/