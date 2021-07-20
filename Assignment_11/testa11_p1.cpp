/*
CH-230-A
a11_p1.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "a11_p1.h"

using namespace std;

int main() {
    Box *arr = NULL ;
    int n;
    double height;
    double width;
    double depth;
    // Declaring variables

    cout << "How many boxes would you like? " << endl;
    cin >> n;
    // Enter a number for n on the keyboard

    arr = new Box[2*n];
    // Dynamically create array of size 2^n

    if (!arr){
        cout << "Memory Allocation Failed" << endl;
        exit(1);
    }
    
    for (int i = 0; i < n; i++){
        cin >> height;
        cin >> depth;
        cin >> width;
        // Getting inputs for each box

        arr[i].setHeight(height);
        arr[i].setDepth(depth);
        arr[i].setWidth(width);
        // Setting the inputs for each dimension
    }
    // Store Values at allocated addresses

    for (int i = 0; i < n; i++){
        arr[n+i]=arr[i];
    }
    // Copying the rest into the remaining positions
    
    for (int i = 0; i < (2*n); i++){
        arr[i].print();
    }
    // Printing the array

    delete[] arr;
    // Freeing the memory

    return 0;
}
