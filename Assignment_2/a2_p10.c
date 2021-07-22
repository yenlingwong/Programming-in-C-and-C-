/*
CH-230-A
a2_p10.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
/*
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
*/

int main() {
    int x;
    int i = 1;
    scanf("%d", &x);

    while (x <= 0) {
        scanf("%d",&x);
    } 

    while(i <= x) {
        if (i == 1) {
            printf("%d day = %d hours\n", i , i * 24);
        } else {
            printf("%d days = %d hours\n", i , i * 24);
        }
        i++;
    }
    return 0;
}
/*
#include<stdio.h>

int main() {
	int n;
	int i = 1; // Initialize iterating variable

	// Accept input only if n is bigger than 0
	do {
		scanf("%d", &n);
		getchar();
	} while(n <= 0);
	
	
	while(i != n + 1) { // Iterate until i is n + 1
		if(i == 1) // Modify output to print "day" instead of "days" when i=1
			printf("%d day = %d hours\n", i, i * 24);
		else
			printf("%d days = %d hours\n", i, i * 24);
		
		i = i + 1;
	}
	
	return 0;
}
*/