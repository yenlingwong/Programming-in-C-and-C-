/*
CH-230-A
a13_p2.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <string>
#include "a13_p2.h"
using namespace std;

Complex::Complex() {
    real = 0;
    imaginary = 0;
}
// Default Constructor

Complex::Complex(double newreal, double newimaginary) {
    real = newreal;
    imaginary = newimaginary;
}
// Constructor for setting properties with specific values

Complex::Complex(const Complex& copy) {
    real = copy.real;
    imaginary = copy.imaginary;
}
// Copy Constructor

Complex::~Complex() {
    //delete[];
}
// Destructor

void Complex::setReal(double newreal) {
    real = newreal;
}

void Complex::setImaginary(double newimaginary) {
    imaginary = newimaginary;
}
// Setter Methods

double Complex::getReal() {
    return real;
}

double Complex::getImaginary() {
    return imaginary;
}

// Getter Methods

Complex Complex::conjugate() {
    Complex temp;
    temp.setReal(getReal() * 1);
    temp.setImaginary(getImaginary() * (-1));

    return temp;
}
// Conjugate Method

void Complex::print() {
    if (imaginary >= 0) {
        cout << real << "+" << imaginary << "i" << endl;
    } else {
        cout << real << imaginary << "i" << endl;
    }
    
}
// Printer Method

Complex Complex::operator+(Complex& copy1) {

    Complex temp;
    temp.setReal((getReal() + copy1.getReal()));
    temp.setImaginary((getImaginary() + copy1.getImaginary()));

    return temp;
}
// Overloading Addition Operator

Complex Complex::operator-(Complex& copy1) {

    Complex temp;
    temp.setReal((getReal() - copy1.getReal()));
    temp.setImaginary((getImaginary() - copy1.getImaginary()));

    return temp;
}
// Overloading Difference Operator

Complex Complex::operator*(Complex& copy1) {

    Complex temp;
    temp.setReal(((getReal() * copy1.getReal()) - (getImaginary() * copy1.getImaginary())));
    temp.setImaginary(((getImaginary() * copy1.getReal()) + (getReal() * copy1.getImaginary())));

    return temp;
}
// Overloading Multiplication Operator

ostream& operator<<(ostream& os, Complex& copy1) {
    if (copy1.getImaginary() > 0) {
        os << copy1.getReal() << "+" << copy1.getImaginary() << "i" << endl;
    } else if (copy1.getImaginary() < 0) {
        os << copy1.getReal() << copy1.getImaginary() << "i" << endl;
    }

    return os;
}
// Overloading Output Operator

istream& operator>>(istream& is, Complex& copy1) {

    string complex1, first, second;
    // Content of file read as strings
    string::size_type sz1, sz2;
    string delimiter = "+-";

    getline(is, complex1);
    // Reading content from file into a string

    size_t position = complex1.find_last_of(delimiter);
    // Finding last occurence of delimiter in the string

    first = complex1.substr(0, position);
    // Get the real part of the string before delimiter
    second = complex1.substr(position, complex1.length() - 1);
    // Get the imaginary part of the string from delimiter to 
    // the position before 'i'

    double rl = stod(first, &sz1);
    double im = stod(second, &sz2);
    // Converting string to doubles

    copy1.setReal(rl);
    copy1.setImaginary(im);
    // Setting values

    return is;
}
// Overloading Input Operator
// Configured to read from filestream

Complex& Complex::operator=(Complex copy1) {
    this->setReal(copy1.getReal());
    this->setImaginary(copy1.getImaginary());
    return *this;
}
// Overloading Assignment Operator