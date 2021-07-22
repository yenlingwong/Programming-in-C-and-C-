/*
CH-230-A
a4_p6.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int *dyn_array, n;
// Global Variables
// I didn't manage to do the function, I only did the dynamic memory allocation

//int largestTwo(int *dyn_array, int n) {
    //int largest = dyn_array[0];
    //int second_largest = dyn_array[0];

    //for (int i = 0; i < sizeof(dyn_array); i++ ) {

    //}
//}

int main() {
    // Declaring functions

    printf("Please enter the number of elements\n");
    scanf("%d", &n);
    // Reading n number of elements from the keyboard

    dyn_array = (int *) malloc(sizeof(int) * n);
    if (dyn_array == NULL) {
        exit (1);
    }
    // Check if malloc returns a valid pointer

    printf("Please enter n number of elements\n");
    for (int i = 0 ; i < n ; i++) {
        scanf("%d", &dyn_array[i]);
    // Input elements into the array
    }

    printf("The two greatest values within the array are .. and ..\n");

    free(dyn_array);
    // Releasing memory at the end of the program

    return 0 ;
}


    

    
