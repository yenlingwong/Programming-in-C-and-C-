/*
CH-230-A
a3_p3.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
int main() {
    float j ;
    int cm ;
    float convert (int cm);
        
    // Scanning for input in cm
    scanf("%d", &cm);
    // Calling function
    j = convert (cm);
    printf("Result of conversion: %.6f\n", j);
        
    return 0 ;
}

    //function declaration
float convert (int cm) { 
    // Function Definition
    float km;
    km = (float) cm / 100000 ;
    //Converting cm to km
    return km;       
}
