/*
CH-230-A
a6_p3.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

#define MIN(a,b) ((a) < (b)  ? (a) : (b) )
#define SMALL(a,b,c) MIN(MIN(a,b),(c))

// Macro to determine the smallest value 

#define MAX(a,b) ((a) > (b)  ? (a) : (b) )
#define LARGE(a,b,c) MAX(MAX(a,b),(c))

// Macro to determine the largest value

#define MID(x,y,z) (0.5 * (SMALL(x, y, z) + LARGE(x,y,z) ) )

// Macro to determine the mid value

int main () {
    int a, b, c ;
    // Initializing variables

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    // Reading three integers from the keyboard

    printf("The mid-range is: %.6f\n", (float) MID(a,b,c) );
    // Calling the MID function in the print function

    return 0 ;
}