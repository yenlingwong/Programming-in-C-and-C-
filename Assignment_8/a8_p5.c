/*
CH-230-A
a8_p5.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch[2];
    int sum;

    FILE *fp1, *fp2;
    // Initializing file pointers

    fp1 = fopen("chars.txt", "r");
    // Function to open file in read only mode

    if (fp1 == NULL){
        printf("Cannot open file!\n");
        exit(1);
    }

    for (int i = 0 ; i < 2; i++)
        ch[i] = getc(fp1);
 
    fclose(fp1);
    // Closing the file

    fp2 = fopen("codesum.txt", "w");
    // Open file in write mode
    if (fp2 == NULL){
        printf("Cannot open file!\n");
        exit(1);
    }

    sum = ch[0] + ch[1];
    // Calculate the sum
    fprintf(fp2,"%d", sum);
    // Function to print
    fclose(fp2);
    // CLose file
    
    return 0 ;
}
