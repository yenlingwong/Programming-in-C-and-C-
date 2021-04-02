/*
CH-230-A
a13_p7.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <exception> 
#include <string>    

using namespace std;

class OwnException : public exception {
    private:
    string f;
    public:
    OwnException(string e) {
    // Constructor with Parameters to throw 
        f = e;
    }
    const char* what() const throw() {
        // Overwriting what method
        return "OwnException\n";
    }
};
// Customized class derived from exception class

void pitcher(int n) {
    // to throw errors
    switch (n) {
        // Switch statement on parameter passed
        case 1:
            try {
                throw 'a';
                // Throw character type
            } catch (char e){
                cerr << "Caught in main " << e << endl;
            }
            break;
            
        case 2:
            try {
                throw 12; 
                // Throw integer type
            } catch (int e) {
                cerr << "Caught in main " << e << endl;
            }  
            break;
        case 3:
            try {
                throw true;
                // Throw bool type
            } catch (bool e){
                cerr << "Caught in main " << e << endl;
            }
            break;
        default:
            try {
                throw OwnException("Default Case Exception");
            } catch (OwnException& e) {
                cerr << "Caught in main " << e.what() << endl;
            }
            break;
        }
}

int main() { 
    pitcher(1);
    pitcher(2);
    pitcher(3);
    pitcher('g');
    // Calling pitcher function to throw and catch 
    return 0;
}

