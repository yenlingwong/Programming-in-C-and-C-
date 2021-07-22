/*
CH-230-A
a4_p12.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void replaceAll(char *str, char c, char e){
    for(; *str!= '\0'; str++) {

        if(*str == c){

            *str = e;
        // Replacing the characters if found

        }
    }
}


int main (){

    char oldString[80], newString[80], c, e;
    
    while(1) {
        
        printf("Enter a string: \n");
        fgets(oldString, 80, stdin);

        //Copy to a new array
        strcpy(newString, oldString);

        //Terminate the program if stop is entered
        if(oldString[0] =='s' && oldString[1] =='t' && oldString[2] =='o'
           && oldString[3] =='p' && oldString[4] =='\n'){

            break;
        }

        //Remove trailing '\n' in fgets
        oldString[strcspn(oldString, "\n")] = 0;
        newString[strcspn(newString, "\n")] = 0;

        printf("Enter a character: ");
        getchar();
        scanf("%c", &c);

        getchar();
        printf("Enter another character to replace that: ");
        scanf("%c", &e);

        //Calling the replaceAll function
        replaceAll(oldString, c, e);

        printf("Your new string is: %s\n", oldString);

    }

    return 0;

}