/*
CH-230-A
a13_p2.cpp
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
    Complex operator+(Complex&);
    Complex operator-(Complex&);
    Complex multiplication(Complex&);
    Complex operator*(Complex&);
    friend ostream& operator<<(ostream&, Complex&);
    friend istream& operator>>(istream&, Complex&);
    Complex& operator=(Complex);
    // Operational Methods
};