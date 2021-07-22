/*
CH-230-A
a6_p6.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

void bin(unsigned char c) 
{  
    for (int i = 1 << 7; i > 0; i = i / 2) 
        (c & i)? printf("1"): printf("0"); 
} 
  
int main(void) { 

    unsigned char c;
    // Initializing unsigned char

    scanf("%c", &c);
    // Reading c from the keyboard

    printf("The decimal representation is: %d\n", c);
    // Print Statement

    printf("The binary representation is: ");
    bin(c);

} 