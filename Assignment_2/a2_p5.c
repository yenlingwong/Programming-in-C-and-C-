/*
CH-230-A
a2_p5.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
int main() {
    int a;
    printf("Enter an integer value: \n");
    scanf("%d", &a);
    printf("The value of a is %d\n", a);

    int *ptr_a;
    ptr_a = &a;
    printf("Address: %p\n", ptr_a);

    *ptr_a = *ptr_a + 5 ;
    printf("New value of a: %d\n", *ptr_a);
    printf("Address: %p\n", ptr_a);


    return 0;
} 
