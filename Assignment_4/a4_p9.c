/*
CH-230-A
a4_p9.c
Yen Ling Wong
ywong@jacobs-university.de
*/

/* Amended Version */

#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n) {
    int smallest = arr[0];
    int biggest = arr[0];
    // Set first element of the array as the
    // Largest and the smalest
    for (int i = 1; i < n; i++) {
        if ((arr[i]) > biggest) {
            biggest = arr[i];
        } else if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return (biggest * smallest);
}

int main() {
    int n, *dyn_array;
    scanf("%d", &n);

    dyn_array = (int *) malloc (sizeof(int) * n);
    if (dyn_array == NULL) {
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &dyn_array[i]);
    }

    printf("The product of the largest and smallest integer in the array is %d", prodminmax(dyn_array, n));

    return 0;
}