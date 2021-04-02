/*
CH-230-A
a13_p8.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <exception>

using namespace std;

class Motor {
    public:
        Motor() {
        // Object of a third class 
        // Constructor with a message
            string message = "This motor has problems\n";
            cerr << message;
            throw message;
            // this is caught in Garage when Car is called
        }
};

class Car {
    public:
        Car() {
            new Motor();
            // Call a motor class
        }
};

class Garage {
    public:
        Garage() {
        // Default Constructor
            try {
                new Car();
                // Error occurs when a car is constructed
                // As an object of Garage
            } 
            catch (string e){
                string message = "The car in this garage has problems with the motor";
                throw message;
                // This is thrown to the main function
            }
        }
};

int main() {
    try {
        Garage g;
    }
    catch(string e) {
        cerr << "Caught in Main: " << e << endl;
    }
    return 0;
}