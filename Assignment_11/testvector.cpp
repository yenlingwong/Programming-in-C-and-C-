/*
CH-230-A
a11_p6.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <iomanip>
#include "Vector.h"

using namespace std;

int main () {
    Vector v1, v2;
    // Initializing new instances

    int size = 3;
    double* vec1 = new double[size] {1.3, 2.4, 3.5};
    double* vec2 = new double[size] {4.6, 5.7, 6.8};
    double* vec4 = new double[size] {8.3, -3.6, 0};
    // Declaring vector array

    v1.setSize(size);
    v1.setPtr(vec1);
    v2.setSize(size);
    v2.setPtr(vec2);
    // Setting pointers into vectors

    Vector v3(v2);
    // Copy Constructor
    Vector v4(size, vec4);
    // Constructing 4th vector

    cout << "The first vector components are: " << endl;
    v1.print();
    cout << "The second vector components are: " << endl;
    v2.print();
    cout << "The third vector components are: " << endl;
    v3.print();
    cout << "The fourth vector components are: " << endl;
    v4.print();

    cout << endl;

    cout << "The norm of the second vector is: " << fixed << setprecision(2) << v2.norm() << endl;

    cout << endl;
    
    cout << "The scalar product of the second and fourth vectors is: " 
         << fixed << setprecision(2) << v2.product(v4) << endl;
    
    cout << endl;

    cout << "The addition of the second and fourth vectors is: " ;
    (v2.add(v4)).print();

    cout << endl;

    cout << "The difference between the second and fourth vectors is: ";
    (v2.difference(v4)).print();

    v1.~Vector();
    v2.~Vector();
    v3.~Vector();
    v4.~Vector();
    return 0;
}
