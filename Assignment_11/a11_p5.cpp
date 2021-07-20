/*
CH-230-A
a11_p5.ppc
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cmath>
#include "Shapes.h"

using namespace std; 

Shape::Shape() : name("Default Shape") {
}
// Default Constructor

Shape::Shape(const string& n) : name(n) {
}
// Constructor with name 

Shape::Shape(const Shape& copy) {
    name = copy.name;
}
// Copy Constructor

void Shape::setName(const std::string& n) {
    name = n;
}
// Setter Method;

void Shape::printName() const {
	cout << name << endl;
}
// Method to print name

string Shape::getName() const {
    return name;
}

CenteredShape::CenteredShape() : Shape("Default Shape") {
    x = 5;
    y = 5;
}
// Default Constructor

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
// Constructor with 3 parameters

CenteredShape::CenteredShape(const CenteredShape& copy) : Shape(copy.getName()) {
    x = copy.x;
    y = copy.y;
    
}
// Copy Constructor

void CenteredShape::setx(int newx) {
    x = newx;
}

void CenteredShape::sety(int newy) {
    y = newy;
}
// Setter Method

double CenteredShape::getx() const {
    return x;
}

double CenteredShape::gety() const {
    return y;
}
// Getter Method

RegularPolygon::RegularPolygon() : CenteredShape("Default Centered Shape", 3, 4) {
    EdgesNumber = 6;
}
// Default Constructor

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) {
	EdgesNumber = nl;
}
// Constructor with 3 parameters

RegularPolygon::RegularPolygon(const RegularPolygon& copy) : 
  CenteredShape(copy.getName(), copy.getx(), copy.gety()) {
    EdgesNumber = copy.EdgesNumber;
}
// Copy Constructor

void RegularPolygon::setEdgesNumber(int newEdgesNumber) {
    EdgesNumber = newEdgesNumber;
}
// Setter Method

int RegularPolygon::getEdgesNumber() const {
    return EdgesNumber;
}
// Getter Method

Rectangle::Rectangle() : RegularPolygon("Default Rectangle", 5, 8, 9){
    width = 8;
    height = 10;
}
// Default Constructor

Rectangle::Rectangle(const string& n, double nx, double ny, int nl, double nwidth,
double nheight) : RegularPolygon(n, nx, ny, nl){
    width = nwidth;
    height = nheight;
}
// Constructor with 6 parameters

Rectangle::Rectangle(const Rectangle& copy) : 
  RegularPolygon(copy.getName(), copy.getx(), copy.gety(), copy.getEdgesNumber()) {
    width = copy.width;
    height = copy.height;
}
// Copy Constructor

void Rectangle::setwidth(double newwidth) {
    width = newwidth;
}

void Rectangle::setheight(double newheight) {
    height = newheight;
}

double Rectangle::getwidth() const {
    return width;
}

double Rectangle::getheight() const {
    return height;
}

double Rectangle::perimeter() {
    return ((getwidth() * 2) + (getheight() * 2));
}

double Rectangle::area() {
    return (getwidth() * getheight());
}

Square::Square() : Rectangle("Default Square", 12, 12, 4, 3, 3) {
    side = 4;
}
// Default Constructor

Square::Square(const string& n, double nx, double ny, int nl, double nwidth, double nheight, double nside) :
Rectangle(n, nx, ny, nl, nwidth, nheight) {
    side = nside;
}
// Constructor with 6 parameters

Square::Square(const Square& copy) : 
  Rectangle(copy.getName(), copy.getx(), copy.gety(), 
  copy.getEdgesNumber(), copy.getwidth(), copy.getheight()) {
    side = copy.side;
}
// Copy Constructor

void Square::setside(double newside) {
    side = newside;
}
// Setter Method

double Square::getside() const {
    return side;
}
// Getter Method

double Square::perimeter() {
    return (getside() * 4);
}

double Square::area() {
    return (getside() * getside());
}

Circle::Circle() : CenteredShape("Default Circle", 2, 2){
    Radius = 4;
}
// Default Constructor

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) {
	Radius = r;
}
// Constructor with 4 parameters

Circle::Circle(const Circle& copy) : CenteredShape(copy.getName(), copy.getx(), copy.gety()) {
    Radius = copy.Radius;
}
// Copy Constructor

void Circle::setRadius(double newradius) {
    Radius = newradius;
}
// Setter Method

double Circle::getRadius() const {
    return Radius;
}
// Getter Method

double Circle::perimeter() {
    return (M_PI * 2 * getRadius());
}

double Circle::area() {
    return (M_PI * getRadius() * getRadius());
}
