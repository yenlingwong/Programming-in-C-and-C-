/*
CH-230-A
a10_p7.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/
#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
	private:
		char *str;
	public:
		NaiveString(const char*);
		NaiveString(const NaiveString&);
		~NaiveString();
		void update(char, char);
		void print();
};

NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/


NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

NaiveString::~NaiveString() {
	cout << "Destructor called\n";
}


/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

void funcByRef(NaiveString &r) {
    cout << "funcByRef() being called" << endl;
    r.update('B', 'S');
    r.print();
}
// Function that uses reference

int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	
	a.print();
	// The value of A changes permanently if funcbyref is called

    cout << endl;
	
    NaiveString b(a);
    // Creating new instance of the class and copying it
    // From a using copy constructor
    b.print();
    cout << "About to call funcByRef()" << endl;
    funcByRef(b);
    b.print();
	
	return 0;
}
