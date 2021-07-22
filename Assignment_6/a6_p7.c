/*
CH-230-A
a6_p7.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int set3bits(int j, int x, int y, int z) 
{
    const int bit1 = (1 << x); 
    const int bit2 = (1 << y);
    const int bit3 = (1 << z);
    // Left Shift

    int num1 = (j | bit1);
    int num2 = (num1 | bit2);
    int num3 = (num2 | bit3);

    return num3;
}
void bin(unsigned char c) 
{  
    for (int i = 1 << 7; i > 0; i = i / 2) 
        (c & i)? printf("1"): printf("0"); 
} 

int main()
{
    unsigned char c;
    // Initializing unsigned character

    scanf("%c", &c);
    // Reading input for character from the keyboard

    int x, y, z; 
    // Declaring three integers for each bit that is to be set
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    // Reading input for each integer
    
    printf("The decimal representation is: %d\n", c);
    //printing the decimal representation

    printf("The binary representation is: ");

    bin(c); 
    // Calling void function to print binary representation
    printf("\n");

    printf("After setting the bits: ");

    bin(set3bits(c, x, y, z));
    // Calling void function to print modified binary representation
    printf("\n");

    return 0;
}
