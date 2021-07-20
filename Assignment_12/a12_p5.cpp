/*
CH-230-A
a12_p5.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include "a12_p5.h"

Fraction::Fraction(){
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d){
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b){
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b){
	return a * b / gcd(a, b);
}

std::ostream& operator<<(std::ostream& os, Fraction& frac){
    os << frac.num << '/' << frac.den << std::endl;

    return os;
}
// Overloading output operator

std::istream& operator>>(std::istream& is, Fraction &frac){

    char temp;
    is >> frac.num >> temp >> frac.den;

    while(frac.den == 0 || temp != '/') {
        std::cout << "ERROR: Denominator cannot be set to zero. Please try again." << std::endl;
        std::cout << "Use the following format: a/b" << std::endl;
        is >> frac.num >> temp >> frac.den;
    }
    // Condition to ensure that the fraction is defined
    return is;
}
// Overloading input operator

Fraction operator*(const Fraction& left, const Fraction& right){
    Fraction f;
    f.num = left.num * right.num;
    f.den = left.den * right.den;

    return f;
}
// Overloading multiplication operator

Fraction operator/(const Fraction& left, const Fraction& right){
    Fraction f;
    f.num = left.num * right.den;
    f.den = left.den * right.num;

    return f;
}
// Operating division operator

Fraction Fraction::operator+(const Fraction& right){
    Fraction f;
    f.num = (((this->num) * f.lcm(this->den, right.den))/this->den) + ((right.num) * (f.lcm(this->den, right.den))/right.den);
    f.den = f.lcm(this->den, right.den);
    return f;
}

Fraction Fraction::operator-(const Fraction& right){
    Fraction f;
    f.num = (((this->num) * f.lcm(this->den, right.den))/this->den) - ((right.num) * (f.lcm(this->den, right.den))/right.den);
    f.den = f.lcm(this->den, right.den);
    return f;
}

Fraction& Fraction::operator=(const Fraction& right){
    num = right.num;
    den = right.den;

    return *this;
}

bool Fraction::operator<(const Fraction& right){
    if (((double)this->num / (double)this->den) < ((double)right.num / (double)right.den)){
        return true;
    } else {
        return false;
    }
}

bool Fraction::operator>(const Fraction& right){
    if (((double)this->num / (double)this->den) > ((double)right.num / (double)right.den)){
        return true;
    } else {
        return false;
    }
}