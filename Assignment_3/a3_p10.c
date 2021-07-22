/*
CH-230-A
a3_p10.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
float product(float a, float b){   
    int product = a * b;
    return product;
}

float productbyref(float a, float b, float *p)
{
    *p= a * b;
	return *p;
}

void  modifybyref(float *a, float *b){
	float *a = &a;
    float *b = &b;

    *a = *a + 3;
    *b = *b + 11;
}

int main() {

	printf("Enter two float values: \n");
	float a, b;
	scanf("%f%f", &a,&b);
	float product_one;
	
    product_one= product(a,b);
	printf("The product of two numbers from first function call is: %f\n", product_one;
	
    float product_two;
    productbyref(a,b,product_two);
	printf("The Product of two numbers from the second function call is: %f\n", product_two);
	//When using reference, the input variables are permanently altered
	modifybyref(&a,&b);
	printf("The modified values are: %f,%f",a ,b);
	
}



