/*
CH-230-A
a3_p6.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
float to_pounds (int kg, int g) {
    float gram_to_kilogram = (float) g / 1000 ;
    // Converting grams to kilograms
    float kilogram_and_gram = gram_to_kilogram + (float) kg ;
    // Sum the total of kilograms
    float pounds = kilogram_and_gram * 2.2;
    //Converting to pounds

    return pounds;
}

int main() {
    int kg, g;
    
    // Scan for input in kilograms
    scanf("%d", &kg);
    // Scan for input in grams
    scanf("%d", &g);
    //Calling the function
    printf("Result of conversion: %f\n", to_pounds(kg, g));

    return 0;
}

//Function Declaration
