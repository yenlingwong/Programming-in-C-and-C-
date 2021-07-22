/*
CH-230-A
a4_p8.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

// Function to print matrix
void printMatrix(int matrix[30][30], int n) {
     for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            printf("%d ", matrix[i][j]);
        } 
            printf("\n"); 
    }
}
   
void diagonal(int matrix[30][30], int n) {
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            if ( n - j - 1  < i )
                printf( "%d ", matrix[i][j] );
        } 
    }
    printf("\n");
}



int main() {

    int n, i, j;
    // Number of rows and columns

    int matrix[30][30];
    // Initializing 30 by 30 2D matrix

    scanf("%d", &n);
    // Reading integer n from keyboard

    for (i = 0 ; i < n; i++) {
        for (j = 0 ; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Matrix to scan elements into the matrix
    printf("The entered matrix is:\n");
    printMatrix(matrix, n);
    // Calling the print function

    printf("Under the secondary diagonal:\n");
    diagonal(matrix, n);
    return 0;
}


