/*
CH-230-A
a5_p1.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

int n ; // n number of rows and columns
char ch;

// Declaring global variables

// Print Function  

char rec(int n, char ch) {
   

    scanf("%d", &n);
    // Reading an integer n from the keyboard
    
    getchar();
    scanf("%c", &ch);
    // Reading a character ch from the keyboard

    int m = n;
    // Assigning the value of n to a new variable m, just so
    // we could separately decrement the number of columns

    for ( int i = n; i > 0 ; i--) {
        for (int j = m; j > 0; j--) {
            printf("%c", ch);
        }
        m--;
        printf("\n");
        // Print to the next line for each consecutive row
    } 

    return 0;
}

int main() {

    rec(n, ch);
    // Calling the function to print

    return 0;
}