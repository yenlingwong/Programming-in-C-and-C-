/*
CH-230-A
a11_p6.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Vector {
    private:
        int size;
        double *ptr;
        // Declaring Properties

    public:
        Vector();
        // Default Constructor
        Vector(int, double *);
        // Constructor for Setting Properties
        Vector(const Vector&);
        // Copy Constructor
        ~Vector();
        // Destructor Method

        void setSize(int newsize);
        void setPtr(double *newptr);
        // Setter Methods

        int getSize() const;
        double* getPtr() const;
        // Getter Methods

        void print() const;
        // Printer Method

        double norm() const;
        Vector add(const Vector& ) const;
        Vector difference(const Vector& ) const;
        double product(const Vector& ) const;
        // Operation Methods
};
/*
#ifndef __VECTOR_H
#define __VECTOR_H
class Vector {
    private:
        double *ptr;
        int size;
    public:
        Vector(double *Ptr, int Size);
        Vector();
        Vector(const Vector&);
        ~Vector();

        void setPtr(double *Ptr);
        void setSize(int Size);

        double* getPtr() const;
        int getSize() const;

        void printComponents() const;
        double norm() const;
        Vector add(const Vector& secAddend) const;
        Vector subtract(const Vector& subtrahend) const;
        double scalarProduct(const Vector& second) const;
};
#endif
*/