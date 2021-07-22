/* 
CH-230-A
a1_p1.c
Yen Ling Wong
ywong@jacobs-university.de
*/

/*
Problem 1.1 Compute Division
Fix the program below such that it prints the correct result. Why is the result 0.000? Write your
answer and explanations within comments.
#include <stdio.h>
int main() {
double result; /∗ The result of our calculation ∗/
result = (3 + 1) / 5;
printf("The value of 4/5 is %lf\n", result);
return 0;
}
*/

#include <stdio.h>

int main() {
    double result; /* The result of our calculation */
    result = (3.0 + 1.0) / 5;
    printf("The value of 4/5 is %lf\n", result);

    return 0;
}

// The result when dividing an integer by an integer will be an integer.
// In line 15, we are dividing 3 + 1 = 4 which is an integer, by 5, another integer,
// Therefore, the result is rounded down from 0.8 to 0 (an integer.)
// Another possible solution is to compute (3 + 1) / 5.0;