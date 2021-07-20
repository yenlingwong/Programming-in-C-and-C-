/*
CH-230-A
a12_p1.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include "a12_p1.h"
#include <iostream>
#include <iomanip> 
using namespace std;

int main(int argc, char** argv) {

    Hexagon h("happyhexagon", 9.9, 3.3, 5, 9, "blue");
    // Blue Hexagon with a side of 9
    Hexagon j("sadhexagon", 9.9, 3.3, 5, 15, "green");
    // Green Hexagon with a side of 15
    Hexagon w(j);
    // Initializing instances

    cout << "The perimeter of the first hexagon ";
    h.printName();
    cout << " is: ";
    cout << fixed << setprecision(2) << h.perimeter();
    cout << " and the area is ";
    cout << fixed << setprecision(2) << h.area() << endl;

    cout << endl;

    cout << "The perimeter of the second hexagon ";
    j.printName();
    cout << " is: ";
    cout << fixed << setprecision(2) << j.perimeter();
    cout << " and the area is ";
    cout << fixed << setprecision(2) << j.area() << endl;
    
    cout << endl;

    cout << "The perimeter of the third hexagon ";
    w.printName();
    cout << " is: ";
    cout << fixed << setprecision(2) << w.perimeter();
    cout << " and the area is " ;
    cout << fixed << setprecision(2) << w.area() << endl;

    return 0;

}