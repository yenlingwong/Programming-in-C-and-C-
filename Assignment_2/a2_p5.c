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

/*
#include<stdio.h>

int main() {
	int a;
	int* ptr_a = &a;
	
	scanf("%d", &a);
	
	// Print the address that ptr_a has stored
	printf("%p\n", ptr_a);
	
	// Increment the value that ptr_a is pointing to by 5 
	*ptr_a = *ptr_a + 5;
	
	// Print the value by dereferencing ptr_a
	printf("%d\n", *ptr_a);
	printf("%p\n", ptr_a);
	
	return 0;
}
*/
