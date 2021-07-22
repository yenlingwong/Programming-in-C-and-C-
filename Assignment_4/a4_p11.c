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
