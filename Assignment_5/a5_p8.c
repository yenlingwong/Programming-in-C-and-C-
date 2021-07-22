/*
CH-230-A
a5_p5.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int **add_space(int n, int m) {
    int **a = (int**)malloc(sizeof(int*) * n);
    if (a == NULL) {
        printf("Error\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        a[i] = (int *)malloc(sizeof(int) * m);
        if (a[i] == NULL) 
        //checking for errors in malloc
        {
            exit(1);
        }
    }
    return a;
}

// General function to allocate memory to each matrix

void input(int **a, int n, int m){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

// General function to scan elements into a matrix

void display(int **a, int n, int m){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

// General matrix to print a matrix
void multi(int *a[], int *b[], int *c[], int n, int m, int p){
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            c[i][j] = 0; 

            for (k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];

            }
        }
    }
}

void remove_space(int **a, int n)
{

    for (int i = 0; i < n; i++)
    {
        free(a[i]);
    }
    free(a);
}
// General function to deallocate memory for each matrix

int main() {
    int n, m, p;
    // Dimensions

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    int **a = add_space(n, m); 
    int **b = add_space(m, p); 
    int **c = add_space(n, p); 
    // Allocating memory for matrices

    input(a, n, m); 
    input(b, m, p); 
    // Calling function to scan elements into matrix A and B

    printf("Matrix A:\n"); 
    display(a, n, m);
    printf("Matrix B:\n"); 
    display(b, m, p);
    // Calling function to print elements of A and B

    multi(a, b, c, n, m, p);
    printf("The multiplication result AxB:\n");
    display(c, n, p);
    // Calling functions to perform multiplication and print

    remove_space(a, n); 
    remove_space(b, m); 
    remove_space(c, n); 
    // Release memory allocated
    
    return 0;
}