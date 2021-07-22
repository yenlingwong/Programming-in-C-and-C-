/*
CH-230-A
a4_p1.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main() {

    float lower, upper, step_size;
    float i;
    // Initializing float variables
    
    scanf("%f", &lower);
    // Reading input for radius lower bound 
    scanf("%f", &upper);
    // Reading input for radius upper bound
    scanf("%f", &step_size);
    // Reading input for step size

    for (i = lower; i <= upper; i += step_size ) {
        printf("%f %f %f\n", lower, acos(-1)* (lower * lower), 2 * lower * acos(-1));
        lower += step_size;
    }

    return 0;
}