/*
CH-230-A
a12_p5.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include "a12_p5.h"

using namespace std;

int main(int argc, char** argv){
    Fraction a, b, c, d, e, f;
    cout << "Please enter a fraction: " << endl;
    cin >> a;
    // Input from keyboard with overloaded input operator
    cout << "Please enter another fraction: " << endl;
    cin >> b;

    if (a > b){
        cout << "The first fraction is greater." << endl;
    } else if (a < b){
        cout << "The second fraction is greater." << endl;
    } else {
        cout << "The fractions are equal." << endl;
    }

    c = a * b;
    // Multiplication
    d = a / b;
    // Division
    e = a + b;
    // Addition
    f = a - b;
    // Subtraction


    cout << "The product of both vectors is: " << c << endl;
    // Printing overloaded output operator
    cout << "The division between the first and second vector is: " << d << endl;
    cout << "The sum of both vectors is: " << e << endl;
    cout << "The difference between the first and second vector is: " << f << endl;
    return 0;
}