/*
CH-230-A
a12_p6.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include "Rectangle.h"
using namespace std;

class Square : public Rectangle {
    private:
        double side;
    public:
        Square(const char *n, double a, double b, double newside);
        // Parametric Constructor
        ~Square();
        double calcArea() const;
        double calcPerimeter() const;

};