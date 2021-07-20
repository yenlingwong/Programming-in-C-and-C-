/*
CH-230-A
a10_p3.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main() {
    City Bremen;
    City London;
    City Paris;
    // Creating instances of the class

    string cityname = "Bremen";
    int citypopulation = 60000;
    string citymayor = "Max";
    double cityarea = 74.6;
    // Declaring variables to store input

    Bremen.setName(cityname);
    Bremen.setInhabitants(citypopulation);
    Bremen.setMayor(citymayor);
    Bremen.setArea(cityarea);
    Bremen.print();

    cityname = "London";
    citypopulation = 1600000;
    citymayor = "Ben";
    cityarea = 154.7;
    
    London.setName(cityname);
    London.setInhabitants(citypopulation);
    London.setMayor(citymayor);
    London.setArea(cityarea);
    London.print();

    cityname = "Paris";
    citypopulation = 1237918;
    citymayor = "Bob";
    cityarea = 2342.53;

    Paris.setName(cityname);
    Paris.setInhabitants(citypopulation);
    Paris.setMayor(citymayor);
    Paris.setArea(cityarea);
    Paris.print();

    return 0;
};
