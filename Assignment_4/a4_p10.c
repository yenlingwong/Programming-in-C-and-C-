/*
CH-230-A
a4_p10.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb) {
    *prod = a * b ;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1 / b;
}

int main () {
    float a, b, product, division, power, inverse;

    printf("\n");
    printf("Enter the first float: \n");
    scanf("%f", &a);
    // Reading float a from the keyboard

    printf("Enter the second float: \n");
    scanf("%f", &b);
    // Reading float b from the keyboard

    // Calling the function here
    proddivpowinv(a, b, &product, &division, &power, &inverse);

    // Printing the results
    printf("%f %f %f %f \n", product, division, power, inverse);
    return 0;
}
