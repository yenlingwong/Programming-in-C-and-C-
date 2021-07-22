/*
CH-230-A
a4_p12.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int count_insensitive(char *str, char c){

    int cnt = 0;

    for(; *str!= '\n'; str++){
        //Counts regardless the capitalization of the chars.
        if(*str == toupper(c) || *str == tolower(c)){
            cnt++;
        }
    }
    return cnt;
}

int main(){

    char *one, *two;
    int num = 50, num2;

    one = (char *) malloc(sizeof(char) * num);

    if (one == NULL){

        printf("Memory not allocated\n");
        exit(1);

    }

    printf("Enter a string: ");
    fgets(one, num, stdin);
    
    //Only necessary memory allocated for the second string.
    num2 = strlen(one);
    two = (char *) malloc(sizeof(char) * num2);

    if (two == NULL){

        printf("Memory could not be allocated\n");
        exit(1);

    }

    //Copying the first string to the second.
    strcpy(two, one);
    
    //Deallocate memory
    free(one);
    
    //Calling the function count_insensitive
    if (count_insensitive(two,'b') == 1) {
        printf("The character 'b' occurs %d time.\n", count_insensitive(two,'b'));
    }

    else {
        printf("The character 'b' occurs %d times.\n", count_insensitive(two,'b'));
    }

    if (count_insensitive(two,'H') == 1){
        printf("The character 'H' occurs %d time.\n", count_insensitive(two,'H'));
    }

    else {
        printf("The character 'H' occurs %d times.\n", count_insensitive(two,'H'));
    }

    if(count_insensitive(two,'8') == 1){
        printf("The character '8' occurs %d time.\n", count_insensitive(two,'8'));

    }

    else {
        printf("The character '8' occurs %d times.\n", count_insensitive(two,'8'));
        
    }

    if (count_insensitive(two,'u') == 1){

        printf("The character 'u' occurs %d time.\n", count_insensitive(two,'u'));

    }

    else {

        printf("The character 'u' occurs %d times.\n", count_insensitive(two,'u'));
        
    }


    if (count_insensitive(two,'$') == 1){

        printf("The character '$' occurs %d time.\n", count_insensitive(two,'$'));

    }

    else{

        printf("The character '$' occurs %d times.\n", count_insensitive(two,'$'));
        
    }

    //Deallocate Memory
    free(two);

    return 0;

}
/*
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int count_insensitive(char *str, char c) {
    int count = 0;
    for (int i = 0; *str != 0; str++) {
        if (toupper(str[i]) == toupper(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    char* strarray = (char *) malloc(sizeof(char) * 50);
    if (strarray == NULL) {
        exit(1);
    }

    fgets(strarray, 50 , stdin);

    printf("The number of occurences of %c is %d\n", 'b', count_insensitive(strarray, 'b'));
    printf("The number of occurences of %c is %d\n", 'H', count_insensitive(strarray, 'H'));
    printf("The number of occurences of %c is %d\n", '8', count_insensitive(strarray, '8'));
    printf("The number of occurences of %c is %d\n", 'u', count_insensitive(strarray, 'u'));
    printf("The number of occurences of %c is %d\n", '$', count_insensitive(strarray, '$'));

    free(strarray);
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

// Function that takes the address of the string and a character
// It returns an integer value that tells us how many times our character was
// encounterd in the string in a case insensitive manner
int count_insensitive(char *str, char c);

int main() {
    int i, count = 0;
    char test[5] = {'b','H','8','u','$'};
    char *temp, *str;
    temp = (char *) malloc(sizeof(char) * 50);

    if(temp == NULL) { // Check if malloc was successful on temp
        exit(1);
    }

    // Input characters until we meet newline and save them to temp
    scanf("%[^\n]%*c", temp);

    str = (char *) malloc(sizeof(char) * strlen(temp));

    if(str == NULL) { // Check if malloc was successful on str
        exit(1);
    }

    strcpy(str, temp);
    free(temp); // Deallocate memory at temp

    // Loop through the string
    for(i = 0; i < strlen(str); i++) {
        // Check if character at this postion is an uppercase letter
        if(str[i] >= 'A' && str[i] <= 'Z') { 
            str[i] = tolower(str[i]); // Lower the case of the character
        }
    }

    // Test for our function to see if it works
    // Loop through all 5 cases found in the array test
    for(i = 0; i < 5; i++) {
        count = count_insensitive(str, test[i]);
        printf("The character '%c' occurs %d times.\n", test[i], count);
    }
    
    return 0;
}

int count_insensitive(char *str, char c) {
    int i;
    int count = 0;
    char lowerC = tolower(c); // Lower the case of the character we search for
    for(i = 0; i < strlen(str); i++) {
        // Check if character of string matches the char we search for
        if(str[i] == lowerC) {
            count++; // Occurrence of character incremented by 1
        }
    }
    return count;
}
*/