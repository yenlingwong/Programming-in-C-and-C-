/*
CH-230-A
a3_p6.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c){
    for (int i = 0; i < n; i++ ){
        for (int i = 0; i < m; i++){
            printf("%c", c);
        }
        m++;
        printf("\n");
    }   
}

int main() {
    int n, m;
    char c;
    
    //Reading integer n from keyboard
    scanf("%d", &n);
    //Reading integer m from keyboard
    scanf("%d", &m);
    // Reading character c from the keyboard
    getchar();
    scanf("%c", &c);
    
    print_form(n, m, c);

    return 0;
}
/*
#include<stdio.h>

void print_form(int n, int m, char c);

int main() {
    int n, m;
    char c;

    scanf("%d", &n);
    getchar();

    scanf("%d", &m);
    getchar();

    scanf("%c", &c);
    
    print_form(n, m, c);

    return 0;
}

void print_form(int n, int m, char c) {
    int i, j;
    // Outer loop for iterating through rows depending on the height n
    for(i = 0; i < n; i++) {
        // Inner loop to print character c m+i times in a row
        for(j = 0; j < (m + i); j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}
*/