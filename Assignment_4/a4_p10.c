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

/*
#include<stdio.h>
#include<math.h>

// Function that returns nothing, gets 2 floats and 4 float pointers (addresses)
// as input. It calculatues the product, division, power of 1st float to the 2nd
// float and inverse of 2nd float
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, 
                   float *invb);

int main() {
    float num1, num2, prod, div, pwr, invb;

    // Input float values
    scanf("%f", &num1);
    scanf("%f", &num2);

    proddivpowinv(num1, num2, &prod, &div, &pwr, &invb);

    // Test if all values "returned" by reference were correct
    if((prod == num1 * num2) && (div == num1 / num2) &&
       (pwr == pow(num1, num2)) && (invb = 1 / num2))
        printf("%f\n%f\n%f\n%f\n", prod, div, pwr, invb);

    return 0;
}

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, 
                   float *invb) {
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b); // Calculate power by using pow() function from math.h
    *invb = 1 / b;
}
*/