/*
CH-230-A
a5_p2.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

float arr[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
int size = 6;
// Declaring global variables

void divby5(float arr[], int size) {

    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] / 5 ;
    }

}

int main() {
    
    printf("Before:\n");
    
    for (int i = 0; i < size; i++){
        printf("%.3f ", arr[i]);
    }

    printf("\n");
    printf("After:\n");

    divby5(arr,size);

    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    return 0 ;
}