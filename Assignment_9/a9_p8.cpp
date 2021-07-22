/*
CH-230-A
a9_p8.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void subtract_max(int *arr, int n){

    int max;

    for (int i = 0; i < n-1; i++){
        if (arr[i] > arr[i+1]){
            max = arr[i];
        } else {
            max = arr[i+1];
        }
    }
    // Finding max value in array

    for (int i = 0; i < n ; i++){
        arr[i] -= max;
    }
    // Subtracting max value from each element of the array
} 

void deallocate(int *arr){

    delete[] arr;
    // Free block of allocated memory
}

int main() {

    int n;
    // Declaring variables

    cin >> n;
    // Reading input from keyboard

    int *arr = NULL;
    // Pointer initialized with NULL

    arr = new(nothrow) int [n];
    // Request block of memory of size n

    if (!arr){
        cout << "Memory Allocation Failed" << endl;
        exit(1);
    } 

    for (int i = 0; i < n; i++)
         cin >> arr[i]; 
        // Store values at allocated address

    subtract_max(arr, n);
    // Calling subtract_max function

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    } 

    deallocate(arr);
    // Call deallocate function to free block of memory
    
    return 0 ;
}
