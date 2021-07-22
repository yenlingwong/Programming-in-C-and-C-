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

