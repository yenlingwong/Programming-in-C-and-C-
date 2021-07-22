/*
CH-230-A
a5_p3.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_lower(char *str) {

    int cnt = 0;

    const char *lowercase = "abcdefghijklmnopqrstuvwxyz";
    for (; *str != '\n'; str++) {
        if (strchr(lowercase, *str) != NULL) {
            // strchr to scan for lowercase letters in the string
            ++cnt;
        }
    }
    return cnt;
} 

int main() {

    char string[50];

    while(1) {

        printf("Please enter a string: \n");
        fgets(string, 50, stdin);

        // Receiving input from user

        if(string[0] == '\n'){

            break;
        }

        // Terminate program if empty string is entered 

        int count_lower(char string[]);

        // Function Declaration

        printf("The number of lowercase characters are %d\n", count_lower(string));

    }

    return 0 ;
}
