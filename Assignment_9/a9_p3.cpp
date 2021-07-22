/*
CH-230-A
a9_p3.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>

using namespace std;

float absolute(float x){
    if (x < 0) {
        return (-x);
    //Return negative is less that zero
    }

    return x;
    // else return positive
}

int main () {

    float x;
    // Declaring variable
    cin >> x;
    // Reading input from keyboard
    cout << absolute(x) << endl;
    // Printing output

    return 0;
}

/*
#include <iostream>

// Function returns a float value, takes a float
// It returns the absolute value of the input float
float abs(float number);

int main(int argc, char **argv) {
    float x;

    std::cin >> x; // Input float
    std::cout << abs(x); // Output the absolute value of float
    
    return 0;
}

float abs(float number) {
    if (number >= 0)
        return number;
    else return (-number); // Return positive value
}
*/