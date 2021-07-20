/*
CH-230-A
a10_p8.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main(){
    Complex c1(3.4, -9.2);
    Complex c2(-22.7, 3.33);
    Complex c3;
    Complex c4;
    Complex c5;
    Complex c6;
    // Initializing new instances

    c3 = c1.conjugate();
    c3.print();
    // The conjugate of the first instance

    c4 = c1.add(c2);
    c4.print();
    // The sum of both instances

    c5 = c2.difference(c1);
    c5.print();
    // Difference between the second and first instance

    c6 = c1.multiplication(c2);
    c6.print();
    // Multiplication between both instances

    c1.~Complex();
    c2.~Complex();
    // Calling destructor method

    return 0;
}
/*
#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main(int argc, char **argv) {
    int real, imaginary;
    Complex firstNumber, secondNumber, thirdNumber;

    cout << "Enter first number's parts: \n"
         << "Real: ";
    cin >> real;
    cout << "Imaginary: ";
    cin >> imaginary;

    firstNumber.setReal(real);
    firstNumber.setImaginary(imaginary);

    cout << "Enter second number's parts: \n"
         << "Real: ";
    cin >> real;
    cout << "Imaginary: ";
    cin >> imaginary;

    secondNumber.setReal(real);
    secondNumber.setImaginary(imaginary);

    cout << "Conjugate of first number: ";
    thirdNumber = firstNumber.conjugate();
    thirdNumber.print();

    cout << "Sum of the two complex numbers: ";
    thirdNumber = firstNumber.add(secondNumber);
    thirdNumber.print();

    cout << "Difference between second and first number: ";
    thirdNumber = secondNumber.sub(firstNumber);
    thirdNumber.print();

    cout << "Multiplication of the two complex numbers: ";
    thirdNumber = firstNumber.mul(secondNumber);
    thirdNumber.print();

    return 0;
}
*/