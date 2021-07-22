/*
CH-230-A
a3_p11.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main() {
    char one[100];
    char two[100];
    //Declaring strings

    fgets(one, sizeof(one), stdin);
    // Reading first string from keyboard
    one [strcspn(one, "\n")] = 0;
    // Removing new line character from being stored into strlen
    fgets(two, sizeof(two), stdin);
    // Reading second string from keyboard
    two [strcspn(two, "\n")] = 0;
    // Removing new line character from being stored into strlen
    

    printf("length1=%li\n",strlen(one));
    printf("length2=%li\n",strlen(two));
    // Printing the length of strings
    printf("concatenation=%s\n", strcat(one,two));
    // Printing the concatenation of both strings

    char three[100] = "";
    strcpy(three, two);
    printf("copy=%s\n", three);
    // printing the copy

    char length2[100];
    strcpy(length2, two);

    char length1[100];
    strcpy(length1, one);
    int result = strcmp(length2, length1);
    if (result < 0){
        printf("one is larger than two\n");
    } else if (result > 0) {
        printf("one is smaller than two\n");
    } else {
        printf("one is equal to two\n");
    } 
    // Comparing string lengths

    char c;
    scanf("%c", &c);
    // Reading c from keyboard
    
    int j = 0;
    int i;
    for (i = 0; i < strlen(two); i++) {
        if(two[i] == c){
            j = 1;
            break;
        }
    }
    if (j) {
        printf("position=%d\n", i);
        // determine position of character in string 2
    } else {
        printf("The character is not in the string\n");
        //if the character is not found in string 2
    }
    

}