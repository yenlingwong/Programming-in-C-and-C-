/*
CH-230-A
a6_p2.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#define string1 "The least significant bit is: "
// Macro to replace string in main function

int main() {
    char c ;
    // Initializing character variable

    scanf("%c", &c);
    // Reading character variable from keyboard

    printf("The decimal representation is: %d\n", c);
    // Print Statements

    if (c & 1) {
        printf("%s 1\n", string1);
    } else {
        printf("%s 0\n", string1);
    }
    
    return 0 ;
}