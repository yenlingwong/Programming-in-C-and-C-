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
/*
#include <iostream>
#include "Box.h"
 
using namespace std;

// Constructor Box with 2 parameters
Box::Box(double Height, double Width, double Depth) {
    height = Height;
    width = Width;
    depth = Depth;
}

// Constructor Box with no parameters sets value to 0 to data members
Box::Box() {
    height = 0;
    width = 0;
    depth = 0;
}

// Copy constructor
Box::Box(Box& box) {
    // Copy data members
    height = box.height;
    width = box.width;
    depth = box.depth;
}

// Destructor Box
Box::~Box() {
    // Empty destructor
}

// Setter methods for each data member of Box class 
void Box::setH(double Height) {
    height = Height;
}

void Box::setW(double Width) {
    width = Width;
}

void Box::setD(double Depth) {
    depth = Depth;
}

// Getter methods for each data member of Box class
double Box::getH() const {
    return height;
}

double Box::getW() const {
    return width;
}

double Box::getD() const {
    return depth;
}
*/