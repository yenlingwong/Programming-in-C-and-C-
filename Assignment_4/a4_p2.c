/*
CH-230-A
a4_p2.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main () {

    char string[50];
    // Initializing string of not more than 50 characters

    fgets(string, sizeof(string), stdin);
    // Reading string from keyboard

    for (int i = 0 ; i < strlen(string) - 1; i++) {
        if (i % 2 == 0) {
            printf("%c\n", string[i]);
        } else {
            printf(" %c\n", string[i]);
            // Print with space before character if in odd index
        }
    }
    return 0;
}