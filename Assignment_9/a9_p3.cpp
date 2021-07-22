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
