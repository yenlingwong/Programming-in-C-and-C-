/*
CH-230-A
a13_p6.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {    
    vector<int> order(20);
    // Uninitialized vector of 20

    for (int i = 0; i < 20; i++) {
        order.at(i) = 8;
        // Adding 8 20 times to the array
    }
    try {
        throw order.at(20);
        // at() throws an out of range
        // accessing 21st element
        // at the 20th position
    }
    catch (const out_of_range& err) {
        cerr << "Out of Range Error: " << err.what() << endl;
    }

    return 0;
}