/*
CH-230-A
a8_p6.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    double f1, f2;
    // Initializing doubles

    char name1[100], name2[100];
    // Initializing arrays to save file name

    FILE *fp1, *fp2, *fp3;
    // File pointers

    scanf("%s", name1);
    scanf("%s", name2);
    // Reading file names
    

    fp1 = fopen(name1, "r");
    // Opening files and check if exists 
    // Getting doubles from files
    if (fp1 == NULL){
        printf("Your file doesn't exist\n");
        exit(1);
    }
    fscanf(fp1 ,"%lf",&f1);
    fclose(fp1);

    fp2 = fopen(name2, "r");
    if (fp2 == NULL){
        printf("Your file doesn't exist\n");
        exit(1);
    }

    
    fscanf(fp2, "%lf", &f2);
    fclose(fp2);
    // Opening last file
    fp3 = fopen("results.txt", "w");
    // Checking if files can open
    if (fp3 == NULL){
        printf("Failing to open file\n");
        exit(1);
    }

    // Writing into file 
    fprintf(fp3, "%lf ", f1 + f2);
    fprintf(fp3, "%lf ", f1 - f2);
    fprintf(fp3, "%lf ", f1 * f2);
    fprintf(fp3, "%lf ", f1 / f2);

    fclose(fp3);
    return 0 ;
}