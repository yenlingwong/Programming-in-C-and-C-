/*
CH-230-A
a5_p7.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

int recursive(int n) {
    if ( n < 1 ) {
        // do nothing
    } else {
        printf("%d,", n);
    }

    return recursive (n - 1) ;
    // Calling the function to itself again, but less 1 this time
}

int main () {
    
    int n ;
    // Declaring integer n

    scanf("%d", &n);
    // Reading an integer n from the keyboard

    recursive(n);

    return 0;
}