/*
CH-230-A
a5_p5.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main () {
    int length;
    float array[100];
    float *p = array;
    
    float *y = &array[0];
    // pointer to the first element of the array

    scanf("%d", &length);
    // Reading length of array from keyboard

    for (int i = 0 ; i < length; i++) {
        scanf("%f", &array[i]);
    }

    // Reading elements into the array

    for (; *p != '\0';) {
        if ( *p < 0 ) {
            printf("Before the first negative value: %ld elements\n", p - y);
            break;
        }
        p++;
    }
    // Pointer increments until a negative value is found
}