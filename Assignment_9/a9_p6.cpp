/*
CH-230-A
a9_p6.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <math.h> 
#include <cstring>
#include <iomanip> 

using namespace std;

int myFirst(int arr1[10]){
    for (int i = 0; i < 10; i++ ) {
        if ((arr1[i] % 2 == 0) && arr1[i] > 0)
            return arr1[i];
    }
    return -1;
}

double myFirst(double arr2[10]){
    double arr2b[10];
    // Declaring new array to copy 

    for (int i = 0; i < 10; i++){
        arr2b[i] = arr2[i];
    }
    // Copying old array into new one

    for (int i = 0; i < 10; i++){
        double intpart;
        if (arr2b[i] < 0 && modf(arr2b[i], &intpart) == 0)
            return arr2[i];
            // Return the index from the original array
    }
    return -1.1;
}

char myFirst(char arr3[10]){
    const char *consonants = "BCDFGHJKLMNPQRSTVWXYZ";
    for (int i = 0; arr3[i]!= '\n'; i++){
        if (strchr(consonants, toupper(arr3[i]))!= NULL){
            return arr3[i];
            // Toupper function for including both upper and lowercase
            // strchr to scan for consonants in the string
        }
    }
    return '0';
}

int main () {

    int arr1[10] = {1, -2, 3, -2, 5, 6};
    double arr2[10] = {1.0, 2.6, -3.7, 4, -5.0};
    char arr3[10] = {'a', 'e', 'i', 'm', 'n'};

    cout << myFirst(arr1) << endl;
    cout << fixed << setprecision(1) << myFirst(arr2) << endl;
    cout << myFirst(arr3) << endl;
    
    return 0 ;
}
