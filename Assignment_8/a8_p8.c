/*
CH-230-A
a8_p6.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fp1;
    // Initializing file pointer
    char name1[100];
    // Name of file
    int n = 0;
    int flag = 1;
    // Counter
    char ch;
    
    scanf("%s", name1);
    // Reading name of file from keyboard
    fp1 = fopen(name1, "r");
    if (fp1 == NULL){
        printf("Your file doesn't exist! \n");
        // Checking if file is null
        exit(1);
    }
    
    while ((ch = getc(fp1)) != EOF){

        if ((ch == ' ' || ch == ',' || ch == '?' || ch == '!' 
            || ch == '.' || ch == '\t' || ch == '\r' || ch == '\n') && flag == 1){
            n++;
            // count if meet one of these
            flag = 0;
            // Set a flag to see if we're still in between words
        }else {
            flag = 1;
            // else don't count
            // and set a flag
        }
        
    }

    fclose(fp1);
    // Close file

    if (flag == 0){
        printf("The file contains %d words.\n", n - 1);
    } else {
        printf("The file contains %d words.\n", n);
    }
    // -1 because it ends on one of the word separators
    // However, there are no more words 
    // At the end of the file

    return 0 ;
}