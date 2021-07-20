// simple class for fractions

/*
CH-230-A
a12_p5.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	friend std::ostream& operator<<(std::ostream &os, Fraction &frac);
	friend std::istream& operator>>(std::istream &is, Fraction &frac);
	// Overloading Input and Output

	friend Fraction operator*(const Fraction&, const Fraction&);
	friend Fraction operator/(const Fraction&, const Fraction&);
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
	Fraction& operator=(const Fraction&);
	bool operator<(const Fraction&);
	bool operator>(const Fraction&);
	// Overloading Math Operators
};


#endif /* FRACTION_H_ */