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
/*
#include <iostream>
#include <climits>

// Function returns nothing, takes integer pointer and an integer
// Integer pointer points to an integer array and the integer following it is 
// the size of the array
// Function subtracts the biggest value of the array from each element of the 
// array
void subtract_max(int *arr, int size);

// Function returns nothing, takes integer pointer
// Integer pointer points to an integer array
// Function deallocates by using delete the memory of our array
void deallocate(int *arr);

int main(int argc, char **argv) {
    int n, *arr;

    std::cin >> n;
    arr = new int[n];

    // Here should be the dynamically allocated memory failure check
    // But we haven't been introduced to catching errors thrown (std::bad_alloc)

    // Loop for accepting input
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    // Output the values of the array before calling subtract_max()
    std::cout << "Before calling subtract_max() on integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    subtract_max(arr, n);

    // Output the values of the array after calling subtract_max()
    std::cout << "After calling subtract_max() on integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    deallocate(arr); // Deallocate the dynamically allocated memory of the array

    return 0;
}

void subtract_max(int *arr, int size) {
    int max = INT_MIN;
    // Traverse the array and find the biggest integer
    for (int i = 0; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    // Traverse the array and subtract max from each integer
    for (int i = 0; i < size; i++)
        arr[i] = arr[i] - max;
}

void deallocate(int *arr) {
    // Deallocate dynamically allocated memory
    delete arr;
}
*/