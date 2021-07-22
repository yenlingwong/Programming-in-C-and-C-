/* CH-230-A
a1_p6.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char c = 'F';
    
    printf("%c %d\n", c + 3, c + 3);


    return 0;
}
/*
#include<stdio.h>
int main() {
    char c = 'F';
    
    // After adding 3 to c, we cast it as a char in order to get the character
    // that has a value of 3 more than the equivalent one of F in the ASCII
    printf("%c\n", (char) (c + 3));
    
    // Print the corresponding integer value of the character in ASCII
    printf("%d\n", c + 3);
    
    return 0;
}
*/