// Function for Stack

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int isEmpty(struct stack *one){
    if (one->count == 0){

        return 1;
    } else {

        return 0;
    }
}

void push(struct stack *one , int n){
    
    if (one->count != 12){
        one->array[one->count] = n;
        one->count++;

    } else {
        printf("Stack Overflow\n");
    }
}

void pop(struct stack *one){
    
    printf("Popping ");
    if(!isEmpty(one)) {
        printf("%d\n", one->array[one->count-1]);
        one->count--;
        
    } else {
        printf("Stack Underflow\n");
    }
}

void empty(struct stack *one) {

    
    printf("Emptying Stack ");

    for (; one->count > 0; one->count--){
        
        printf("%d ", one->array[one->count-1]);

    }

    printf("\n");    
    
}

void toBinary(struct stack *one, unsigned int n) {
    int c;
    while (n > 0) {
        c = n % 2 ;
        push(one, c);
        // Pushing each digit into the stack
        n = n / 2;
    }
}
// Converting to Binary

void printBinary(struct stack *one, unsigned int n){
    printf("The binary representation of %d is ", n);
    for (int i = one->count - 1; i >= 0; i--){
        printf("%d", one->array[i]);
    }
    
    printf(".\n");
}
// Printing the stack by iterating the array