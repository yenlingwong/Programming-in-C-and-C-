/* 
CH-230-A
a1_p2.c
Yen Ling Wong
ywong@jacobs-university.de
*/

/*
Problem 1.2 Wrong output
Fix the program below such that it prints the correct value. Why does the program print “The
result is -1073745604”? (Values will vary). Write your answer and explanations within
comments.
#include <stdio.h>
int main() {
int result; /∗ The result of our calculation ∗/
result = (2 + 7) ∗ 9 / 3;
printf("The result is %d\n");
return 0;
}
*/

#include <stdio.h>

int main() {
    int result; /* The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result);
    return 0;
}

// No argument was given to the printf function, therefore
// the output is a random value