/*
CH-230-A
a10_p5.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/
 
#include <iostream>
#include <cstdlib>
#include "Critter.h"
 
//using namespace std;
 
int main(int argc, char** argv){
 
    std::string name = "Alex";
    // Declaring name variable
 
    Critter c1;
    Critter c2(name);
    Critter c3(name, 5, 3.6, 23.5, 3, 3.0);
    Critter c4(name, 5, 3.6, 23.5, 3, 3.0, 234.3);
    // Thirst and Hunger Levels set to the same
    Critter c5(name, 5, 3.6, 23.5, 3, 3.0, 234.3);
    // Calling constructors 
 
    c1.print();
    c2.print();
    c3.print();
    c4.print();
    // Print Functions
    
    return 0;
}