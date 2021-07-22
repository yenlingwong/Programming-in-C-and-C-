/*
CH-230-A
a3_p2.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
    int main() {
        char ch;
        int n;
        int i;

    printf("Enter a lowercase character: \n");
    scanf("%c", &ch);
    // Lowercase character is entered
    
    printf("Enter an integer digit: \n");
    scanf("%d", &n);
    // Integer digit n is entered

    for ( i = n ; i >= 0 ; i--) {
        printf("%c ", ch);
        ch = ch - 1;
        //Decreases ch by 1 after every loop
    }
    
    return 0;
}
