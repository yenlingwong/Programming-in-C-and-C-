/*
CH-230-A
a6_p1.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

#define flip(t,a,b) { t _c; _c = a; a = b; b = _c; }
// Macro named 'flip' defined here to swap two values

int main() {

    int int1, int2;
    double f1, f2;
    // Declaring Variables

    scanf("%d", &int1);
    scanf("%d", &int2);
    scanf("%lf", &f1);
    scanf("%lf", &f2);

    // Reading input from keyboard

    printf("After swapping:\n");

    flip(int, int1, int2);
    // Calling macro function to flip both integers
    // The arguments are type t, input x and input y

    printf("%d\n", int1);
    printf("%d\n", int2);
    // print the results

    flip(double, f1, f2);
    // Calling macro function to flip both floats
    
    printf("%.6lf\n", f1);
    printf("%.6lf\n", f2);
    // print the results with floating point precision of 6


    return 0 ;
}