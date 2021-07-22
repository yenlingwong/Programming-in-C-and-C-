/*
CH-230-A
a2_p6.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
int main() {
    double x , y ;
    printf("Enter the first double: \n");
    scanf("%lf", &x);
    printf("Enter the second double: \n");
    scanf("%lf", &y);

    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("Address of ptr_one is %p\n", ptr_one);
    printf("Address of ptr_two is %p\n", ptr_two);
    printf("Address of ptr_three is %p\n", ptr_three);
    return 0;
}
