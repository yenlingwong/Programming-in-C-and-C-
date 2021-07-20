/*
CH-230-A
a12_p6.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include "Square.h"
using namespace std;

Square::Square(const char *n, double a, double b, double newside) : Rectangle(n, a, b) {
    side = newside;
}

Square::~Square() {
}

double Square::calcArea() const {
    cout << "calcArea of Square...";
    return (side * side);
}

double Square::calcPerimeter() const {
    cout << "calcPerimeter of Square...";
    return (4 * side);
}