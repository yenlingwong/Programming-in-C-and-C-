/*
CH-230-A
a10_p9.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

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

Complex Complex::add(Complex& copy1) {

    Complex temp;
    temp.setReal((getReal() + copy1.getReal()));
    temp.setImaginary((getImaginary() + copy1.getImaginary()));

    return temp;
}
// Addition Method
// Call a default constructor without parentheses

Complex Complex::difference(Complex& copy1) {

    Complex temp;
    temp.setReal((getReal() - copy1.getReal()));
    temp.setImaginary((getImaginary() - copy1.getImaginary()));

    return temp;
}
// Difference Method

Complex Complex::multiplication(Complex& copy1) {

    Complex temp;
    temp.setReal(((getReal() * copy1.getReal()) - (getImaginary() * copy1.getImaginary())));
    temp.setImaginary(((getImaginary() * copy1.getReal()) + (getReal() * copy1.getImaginary())));

    return temp;
}
// Multiplication Method
