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

/*
#include<stdio.h>

int main() {
	float a, b, h;
	
	// Input bases and heights
	scanf("%f", &a);
	getchar();
	scanf("%f", &b);
	getchar();
	scanf("%f", &h);
	getchar();
	
	// Calculate areas and assign them to respective float variables
	float squareArea = a * a;
	float rectangleArea = a * b;
	float triangleArea = 0.5 * (a * h);
	float trapezoidArea = 0.5 * h * (a + b);
	
	// Print areas
	printf("square area=%f\n", squareArea);
	printf("rectangle area=%f\n", rectangleArea);
	printf("triangle area=%f\n", triangleArea);
	printf("trapezoid area=%f\n", trapezoidArea);
	
	return 0;
}
*/