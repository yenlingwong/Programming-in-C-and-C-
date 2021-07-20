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
// Difference of 2 vectors
/*
#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

Vector::Vector(double *Ptr, int Size) {
    ptr = Ptr;
    size = Size;
}

Vector::Vector() {
    ptr = NULL;
    size = 0;
}

Vector::Vector(const Vector& vec) {
    ptr = new double[vec.size];
    size = vec.size;
    for (int i = 0; i < vec.size; i++) {
        ptr[i] = vec.ptr[i];
    }
}

Vector::~Vector() {
    delete [] ptr;
}

void Vector::setPtr(double *Ptr) {
    ptr = Ptr;
}

void Vector::setSize(int Size) {
    size = Size;
}

double* Vector::getPtr() const{
    return ptr;
}

int Vector::getSize() const {
    return size;
}

void Vector::printComponents() const {
    std::cout << "[ ";
    for (int i = 0; i < getSize(); i++) {
        if (i != (getSize() - 1)) {
            std::cout << getPtr()[i]
                      << " , ";
        } else std::cout << getPtr()[i];
    }
    std::cout << " ]" << endl;
}

double Vector::norm() const {
    double sum = 0;
    for (int i = 0; i < getSize(); i++) {
        sum += pow(getPtr()[i], 2);
    }
    return sqrt(sum);
}

Vector Vector::add(const Vector& secAddend) const {
    double *vecResult = new double[getSize()];
    Vector additionVec(vecResult, getSize());
    for (int i = 0; i < getSize(); i++)
        vecResult[i] = getPtr()[i] + secAddend.getPtr()[i];

    return additionVec;
}

Vector Vector::subtract(const Vector& subtrahend) const {
    double *vecResult = new double[getSize()];
    Vector subtractionVec(vecResult, getSize());
    for (int i = 0; i < getSize(); i++)
        vecResult[i] = getPtr()[i] - subtrahend.getPtr()[i];
    
    return subtractionVec;
}

double Vector::scalarProduct(const Vector& second) const {
    double scalProd = 0;
    for (int i = 0; i < getSize(); i++)
        scalProd += (getPtr()[i] * second.getPtr()[i]);
    
    return scalProd;
}
