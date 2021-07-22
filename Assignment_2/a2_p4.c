/*
CH-230-A
a2_p4.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
int main() {
    float a, b, h;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    float square_area = a * a ;
    float rectangle_area = a * b ;
    float triangle_area = 0.5 * a * h ;
    float trapezoid_area = 0.5 * ( a + b ) * h ;

    printf("square area=%f\n", square_area);
    printf("rectangle area=%f\n", rectangle_area);
    printf("triangle area=%f\n", triangle_area);
    printf("trapezoid area=%f\n", trapezoid_area);
    return 0;
}
