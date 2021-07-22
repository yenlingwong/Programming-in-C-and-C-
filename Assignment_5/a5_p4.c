/*
CH-230-A
a5_p4.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void divby5(float arr[], int n) {
    for (int i = 0; i < n; i++ ) {
        arr[i] = (float) arr[i] / 5 ;
    }
}

int main() {

    int n;

    printf("Please input an integer: \n");
    scanf("%d", &n);

    float *arr;

     // Dynamically allocating array
    arr = (float *) malloc(sizeof(float) * n);

    if (arr == NULL) {
        printf("Memory not allocated\n");
        exit(1);
    }

    printf("Please enter %d number of integers\n", n);

    for ( int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("\n");
    printf("Before:\n");
    
    for (int i = 0; i < n; i++){
        printf("%.3f ", arr[i]);
    }
    // Printing the original array

    printf("\n");
    printf("After:\n");

    divby5(arr, n);
    // Calling the divby5 function

    for (int i = 0; i < n; i++) {
        printf("%.3f ", arr[i]);
    }

    // Printing each element of the divby5 function

    printf("\n");
    free(arr);
    // Deallocating Memory

    return 0 ;
}

