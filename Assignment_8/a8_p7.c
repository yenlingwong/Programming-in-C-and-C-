/*
CH-230-A
a8_p7.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initializing file pointers
    FILE *fp1, *fp2, *fp3;

    char ch;
    // Variable to store characters

    fp1 = fopen("text1.txt", "r");
    if (fp1 == NULL){
        printf("Your file doesn't exist\n");
        exit(1);
    }
    // Open file 1

    fp3 = fopen("merge12.txt", "w");
    if (fp3 == NULL){
        printf("Your file couldn't open\n");
        exit(1);
    }
    // Open file 3

    while ((ch = getc(fp1)) != EOF){
        fprintf(fp3, "%c", ch);
    }
    // While loop to iterate through the file
    // Writing into the third file

    fclose(fp1);
    // Closing file 1

    fp2 = fopen("text2.txt", "r");
    if (fp2 == NULL){
        printf("Your file couldn't open\n");
        exit(1);
    }
    // Opening file 2

    while ((ch = getc(fp2)) != EOF){
        fprintf(fp3, "%c", ch);
    }
    // Iterating the file

    fclose(fp2);
    fclose(fp3);
    // Close both files

    return 0 ;
}