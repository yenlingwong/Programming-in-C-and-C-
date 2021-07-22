/*
CH-230-A
a3_p4.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
int position(char str[], char c) {
    int idx;
    /* Loop until end of string */

    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx); 
        // added semicolon to terminate the for loop so that it doesn't return 0
    /* do nothing */
    return idx; 
}

int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    
    }
    return 0;
    // added return 0
}
