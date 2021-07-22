/*
CH-230-A
a6_p4.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

#ifdef INTERMEDIATE
    #define INTERMED { \
        printf("The intermediate product values are: \n"); \
        for (int i = 0; i < n; i++) { \
        printf("%d\n", intermed(i));\
        }\
    }
#endif


int n;
int v[50];
int w[50];

// Declaring global variables

int scalar(int v[n], int w[n]) {
    int product = 0 ;
    char intermed[n];
    for ( int i = 0; i < n; i++) {
        intermed[i] = v[i] * w[i];
        product += intermed[i];
    }

    return product;
}

int main() {

    scanf("%d", &n);
    // Reading integer n from the keyboard

    for ( int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    // Reading elements into V

    for ( int i = 0; i < n; i++){
        scanf("%d", &w[i]);
    }
    // Reading elements into W

    printf("Scalar product= %d\n", scalar(v,w));
    // Printing scalar products

    #define INTERMEDIATE

    return 0 ;
}
