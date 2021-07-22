/*
CH-230-A
a5_p7.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

    char one[100], two[100];
    char *three;

    fgets(one, 100, stdin);
    // Reading input for first string

    fgets(two, 100, stdin);
    // Reading input for second string
    
    one[strcspn(one, "\n")] = 0;
    two[strcspn(two, "\n")] = 0;

    // Removing trailing '\n' in fgets

    three = malloc(strlen(one) + strlen(two) + 1); 
    // Dynamically allocating memory for concatenated string
    // +1 for the null terminator

    if (three == NULL) {

        printf("Memory could not be allocated\n");
        exit(1);
    // Checking for errors
    }

    strcpy(three, one);
    strcat(three, two);

    printf("Result of concatenation: %s\n", three);

    free(three);
    // Deallocating the string

    return 0 ;
}