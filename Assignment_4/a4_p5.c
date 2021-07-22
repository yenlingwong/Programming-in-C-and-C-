/*
CH-230-A
a4_p5.c
Yen Ling Wong
ywong@jacobs-university.de
*/

// Defining Function
#include<stdio.h>
#include<string.h>
#include<ctype.h>

// pointer to walk through function
int count_consonants(char *str) {

    int count = 0;

    const char *consonants = "BCDFGHJKLMNPQRSTVWXYZ";
    for (int i = 0; str[i] != '\n'; i++) {
        if (strchr(consonants, toupper(str[i])) != NULL) {
            ++count;
            // Toupper function for including both upper and lowercase
            // strchr to scan for consonants in the string
        }
    }
    return count;
}
int count_consonants(char str[]);

// Function Declaration

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    // Read input from the keyboard    
    while(str[0] != '\n') {

        printf("Number of consonants=%d\n", count_consonants(str));
        fgets(str, sizeof(str), stdin);
        if (str[0] == '\n') {
            break;
        }
    }

    return 0;
}