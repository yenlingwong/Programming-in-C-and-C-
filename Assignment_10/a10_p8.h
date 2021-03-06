/*
CH-230-A
a10_p8.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <string>
using namespace std;

class Complex {

    private:

    double real;
    double imaginary;
    // Declaring Properties

    public:

    Complex();
    Complex(double newreal, double newimaginary);
    Complex(const Complex&);
    ~Complex();
    // Destructor Function
    
    // Declaring Constructors

    void setReal(double newreal);
    void setImaginary(double newimaginary);
    // Setter Methods

    double getReal();
    double getImaginary();
    // Getter Methods

    void print();
    Complex conjugate();
    Complex add(Complex& copy1);
    Complex difference(Complex& copy1);
    Complex multiplication(Complex &copy1);
};
