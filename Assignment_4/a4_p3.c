/*
CH-230-A
a4_p3.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

float geometric_mean (float arr[], int num) {
    float product = 1;

    for (int j = 0 ; j < num; j++) {
        product = product * arr[j];
    // Multiplying each element of the array with the next
    }

    float gmean = pow(product, (float) 1 / num);
    // Using power function to calculate exponent

    return gmean;
}

float highest_number(float arr[], int num) {

    for (int k = 1 ; k < num; k++) {
        if (arr[0] < arr[k]) {
            arr[0] = arr[k];
            // Storing highest value to the first element of the array
        }
    }
    return arr[0];
}


float lowest_number(float arr[], int num) {
   
    for (int l = 1 ; l < num; l++) {
        if (arr[0] > arr[l]) {
            arr[0] = arr[l];
            // Storing smallest value to the first element of the array
        }
    }
    return arr[0];

}

float sum(float arr[], int num) {
    float total = 0 ;
    for (int m = 0 ; m < num; m++) {
        total += arr[m];
    }
    return total;

}

    float geometric_mean(float arr[], int num);
    float highest_number(float arr[], int num);
    float lowest_number(float arr[], int num);
    float sum(float arr[], int num);

    // Declaring functions

int main() {

    float arr[15];
    char x;
    int num = sizeof(arr);

    // Initializing global variables

    printf("Please enter 15 positive floats\n");

    for ( int i = 0 ; i < 15; i++ ) {
        scanf("%f", &arr[i]);
        // Scanning for 15 integer inputs
        if ( arr[i] < 0) {
            break; 
        // Negative value ends the input loop
        }
    }

    printf("Please enter a character: \n");
    
    getchar();
    scanf("%c", &x);
    // Reading character from the keyboard

    switch (x) {
        case 'm' :
            printf("%f", geometric_mean(arr,num));
            // printing result of the function computing the geometric mean
            break;

        case 'h' :
            printf("%f", highest_number(arr,num));
            // printing the result of the highest number in the array
            break;

        case 'l' :
            printf("%f", lowest_number(arr, num));
            // printing the result of the lowest number in the array
            break;

        case 's' :
            printf("%f", sum(arr, num));
            // printing the sum of the elements in the array
            break;

    }

    // Switch statement

    return 0;
}
