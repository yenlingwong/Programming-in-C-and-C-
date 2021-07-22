/* 
CH-230-A
a1_p3.c
Yen Ling Wong
ywong@jacobs-university.de
*/

/*
Problem 1.3 A compile error
You will get compiler errors, when you try to compile the example code given below.
Read the error messages that the compiler produces and fix the errors such that your source code
compiles successfully. Then fix the program to print the correct result. Explain within comments
the reason of the errors and describe your fixes.
include <stdio.h>
int main() {
float result; /∗ The result of the division ∗/
int a = 5;
int b = 13.5;
result = a / b;
printf("The result is %d\n", result);
return 0;
}
*/

#include <stdio.h>

int main() {
	float result; /* The result of the division */
	int a = 5;
	float b = 13.5;
	result = a / b;

	printf("The result is %f\n", result);

return 0;
}

// To fix the program, add a "# sign" to the front of "include <studio.h>" to declare it as a header.
// Since 13.5 is not an integer, declaring b as an integer will render an error
// Changing its data type to float would fix it.
// The result is a float, therefore the placeholder should reflect the same datatype.
// Change %d to %f


/*#include <stdio.h>

int main() {
	float result; /* The result of the division */
	/*int a = 5;
	
	// Assigning a floating point value to an int results in the 
	// value being truncated down to the nearest integer in this case 13
	// To solve this, change the type of the variable to match the value
	float b = 13.5;
	
	// Result has a floating point number as a value from
	// the division between an int and a float
	result = a / b;
	
	// Initial statement wanted to receive an integer data type as an argument
	// Our result is a float data type
	// To solve this, chnage the type that the printf statement is expecting to
	// match our result data type
	printf("The result is %f\n", result);
	
	return 0; */
//}
