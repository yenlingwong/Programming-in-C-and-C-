/*
CH-230-A
a7_p7.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main() {

    char c ;
    int n;
    struct stack one;
    one.count = 0;
    

    while(1) {
        scanf("%c", &c);

        switch(c) {

            case 's':
            scanf("%d", &n);
            getchar();

            push(&one, n);

            break;

            case 'p':
            pop(&one);

            break;

            case 'e':
            empty(&one);

            break;

            case 'q':
            printf("Quit\n");
            exit(1);
            

            break;
        }
    }


    return 0 ;
}