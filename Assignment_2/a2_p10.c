/*
CH-230-A
a2_p10.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int i;
    int n;
    scanf("%d",&n); 
    
    if (n <= 0) {
// Input doesn't satisfy condition
        while (n <= 0) {
            scanf("%d",&n);
// Keep adding input until satisfying condition
        } 
        if ( n > 0 ) {
// Input satisfies condition
            for (i = 1 ; i <= n;) {
                printf("%d days = %d hours\n", i , i * 24);
                i++;
            }  
        }      
    } 
    else {
        for (i = 1 ; i <= n;) {
                printf("%d days = %d hours\n", i , i * 24);
                i++;
            }  
    }
   
    return 0; 
}
