/*
CH-230-A
a5_p7.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

int prime(int x, int i) {
   // base case
   if ( x == 1) {
       return 0;
       // 1 is not a prime number

   } else if (i == 1) {
       return 1;
       
   } else if (x % i == 0) {
       return 0 ;
       // another factor of x has been found, so x is not prime
   } else {
       return prime(x, i - 1);
       // Calling the function again
   }
}

int main () {
    int x, isPrime;
    // Declaring integer x

    scanf("%d", &x);
    // Reading integer x from keyboard

    isPrime = prime(x, x/2);
    // x/2 is the largest possible factor besides itself
    
    if (isPrime == 0) {
        printf("%d is not prime\n", x);
    } else {
        printf("%d is prime\n", x);
    }

    return 0;
}