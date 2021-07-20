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

/*
#include <iostream>
#include "Complex.h"
 
using namespace std;

// Constructor Complex with 2 parameters
Complex::Complex(int Real, int Imaginary) {
    real = Real;
    imaginary = Imaginary;
}

// Constructor Complex with no parameters sets value to 0 to data members
Complex::Complex() {
    real = 0;
    imaginary = 0;
}

// Copy constructor
Complex::Complex(Complex& num) : real(num.real), imaginary(num.imaginary) {
    // Copy data members
}

// Destructor Complex
Complex::~Complex() {
    // Empty destructor
}

// Setter methods for each data member of Complex class 
void Complex::setReal(int newReal) {
    real = newReal;
}

void Complex::setImaginary(int newImaginary) {
    imaginary = newImaginary;
}

// Getter methods for each data member of Complex class
int Complex::getReal() {
    return real;
}

int Complex::getImaginary() {
    return imaginary;
}

// Methods to perform operations on complex numbers
Complex Complex::conjugate() {
    Complex temp;
    // Calculate real and imaginary part of conjugate by leaving real part
    // as it is and multiplying imaginary part by (-1)
    temp.setReal(getReal());
    temp.setImaginary((-1) * getImaginary());
    return temp;
}

Complex Complex::add(Complex& num) {
    Complex temp;
    // Calculate real and imaginary part by adding respective data 
    // members which are accessed using getter methods for both instances
    temp.setReal(getReal() + num.getReal());
    temp.setImaginary(getImaginary() + num.getImaginary());
    return temp;
}

Complex Complex::sub(Complex& num) {
    Complex temp;
    // Calculate real and imaginary part by subtracting respective data 
    // members which are accessed using getter methods for both instances
    temp.setReal(getReal() - num.getReal());
    temp.setImaginary(getImaginary() - num.getImaginary());
    return temp;
}

Complex Complex::mul(Complex& num) {
    Complex temp;
    // Real part calculated using (a * c) - (b * d)
    temp.setReal(getReal() * num.getReal() - 
                 getImaginary() * num.getImaginary());
    // Imaginary part calculated using (a * d) + (b * c)
    temp.setImaginary(getReal() * num.getImaginary() + 
                      getImaginary() * num.getReal());
    return temp;
}

// Method print of the Complex class outputs the data members using
// the complex number format: real +- imaginary i
void Complex::print() {
    // Check if imaginary part is bigger than 0
    if (getImaginary() >= 0)
        cout << getReal() << " + " << getImaginary() << "i" << endl;
    else cout << getReal() << " - " << -1 * getImaginary() << "i" << endl;
}
*/