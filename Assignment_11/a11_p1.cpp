/*
CH-230-A
a11_p1.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include "a11_p1.h"

using namespace std;

Box::Box() {
    height = 0;
    width = 0;
    depth = 0;
}
// Default Constructor

Box::Box(double newheight, double newwidth, double newdepth) {
    height = newheight;
    width = newwidth;
    depth = newdepth;
}
// Constructor

Box::Box(const Box& copy) {
    height = copy.height;
    width = copy.width;
    depth = copy.depth;
}
// Copy Constructor

Box::~Box() {
    //
}
// Destructor

void Box::setHeight(double newheight) {
    height = newheight;
}

void Box::setWidth(double newwidth) {
    width = newwidth;
}

void Box::setDepth(double newdepth) {
    depth = newdepth;
}

// Setter Methods

double Box::getHeight() {
    return height;
}

double Box::getWidth() {
    return width;
}

double Box::getDepth() {
    return depth;
}

// Getter Methods

void Box::print() {
    cout << "Height: " << height << endl;
    cout << "Width: " << width << endl;
    cout << "Depth: " << depth << endl;
    cout << "Volume: " << (height * width * depth) << endl;
    cout << endl;
}
// Printing Method
