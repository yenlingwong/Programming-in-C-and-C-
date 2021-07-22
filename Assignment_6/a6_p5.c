/*
CH-230-A
a6_p5.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

void reversebinary(unsigned char c) {
    if ((int) c == 0) {

        printf("%d", 0);
        
    } else {
        int moveleft = 0;
        // Defining mask bit here as 'moveleft'

        while (((int) c >> moveleft) > 0) {
            printf("%d", ((int)c >> moveleft) & 1);

            moveleft++;
            // Increment maskbit one step towards the left after each loop
        }
    }

    
    
}
// Recursive Function to print Binary Representation

int main () {

    unsigned char c;
    // Initializing unsigned char

    scanf("%c", &c);
    // Reading c from the keyboard

    printf("The decimal representation is: %d\n", c);
    // Print Statement

    printf("The backwards binary representation is: ");

    reversebinary(c);
    // Calling function to print reversed binary representation

    printf("\n");

    return 0 ;
}