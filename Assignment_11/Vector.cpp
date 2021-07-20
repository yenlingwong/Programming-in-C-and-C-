/*
CH-230-A
a11_p6.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Vector.h"

using namespace std;

Vector::Vector() {
    size = 0;
    ptr = NULL;
}
// Default Constructor

Vector::Vector(int newsize, double * newptr) {
    size = newsize;
    ptr = new double[size];
    for (int i = 0; i < size; i++) {
        ptr[i] = newptr[i];
    }
}
// Constructor for setting with specific values

Vector::~Vector() {
    delete [] ptr;
}
// Destructor Method using delete

Vector::Vector(const Vector& copy) {
    size = copy.size;
    ptr = new double[size];
    for (int i = 0; i < size; i++) {
        ptr[i] = copy.ptr[i];
    }
    //this->ptr = copy.ptr;
}
// Copy Constructor

void Vector::setSize(int newsize){
    size = newsize;
}

void Vector::setPtr(double * newptr) {
    ptr = newptr;
}
// Setter Methods

int Vector::getSize() const {
    return size;
}

double* Vector::getPtr() const {
    return ptr;
}
// Getter Methods

void Vector::print() const {
    for (int i = 0; i < getSize(); i++){
        cout << fixed << setprecision(2) << getPtr()[i] << " ";
    }
    cout << endl;
}
// Print Methods

double Vector::norm() const {
    double result = 0;
    for (int i = 0; i < getSize(); i++) {
        result += pow(getPtr()[i], 2);
    }
    return sqrt(result);
}
// Magnitude of Vector

double Vector::product(const Vector& productvector) const {
    double product = 0;
    for (int i = 0; i < getSize(); i++) {
        product += (getPtr()[i] * productvector.getPtr()[i]);
    }

    return product;
}
// Scalar Product of 2 vectors

Vector Vector::add(const Vector& addvector) const {
    Vector temp(addvector);
    for (int i = 0; i < getSize(); i++) {
        temp.ptr[i] = ptr[i] + addvector.ptr[i];
    }

    return temp;
}
// Addition of 2 vectors

Vector Vector::difference(const Vector& differencevector) const {
    Vector temp(differencevector);
    for (int i = 0; i < getSize(); i++) {
        temp.ptr[i] = getPtr()[i] - differencevector.getPtr()[i];
    }

    return temp;
}
