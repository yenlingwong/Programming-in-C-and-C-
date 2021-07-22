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
