/*
CH-230-A
a11_p5.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>
#include <iomanip> 
using namespace std;

int main(int argc, char** argv) {

    Circle c("first circle", 3, 4, 7);
    RegularPolygon r("TRIANGLE", 1, 1, 3);
    Rectangle w("BOXEY BOI", 6, 2, 3, 8, 10);
    Square s("spongebob _pants", 4, 2, 9, 2, 2, 2);
    // Creating Instances of each class

    r.printName();
    c.printName();
    w.printName();
    s.printName();
    // Printing Names of each shape

    cout << "Perimeter of Rectangle: " << fixed << setprecision(2) << w.perimeter() << endl;
    cout << "Perimeter of Square: " << fixed << setprecision(2) << s.perimeter() << endl;
    cout << "Perimeter of Circle: " << fixed << setprecision(2) << c.perimeter() << endl;
    cout << "Area of Rectangle: " << fixed << setprecision(2) << w.area() << endl;
    cout << "Area of Square " << fixed << setprecision(2) << s.area() << endl;
    cout << "Area of Circle " << fixed << setprecision(2) << c.area() << endl;
    // Printing the area and perimeter of each shape
    return 0;

}