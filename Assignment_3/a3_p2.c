/*
CH-230-A
a3_p2.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
    int main() {
        char ch;
        int n;
        int i;

    printf("Enter a lowercase character: \n");
    scanf("%c", &ch);
    // Lowercase character is entered
    
    printf("Enter an integer digit: \n");
    scanf("%d", &n);
    // Integer digit n is entered

    for ( i = n ; i >= 0 ; i--) {
        printf("%c ", ch);
        ch = ch - 1;
        //Decreases ch by 1 after every loop
    }
    
    return 0;
}

/*

int main() {
    char ch;
    int n;
    scanf("%c", &ch);
    scanf("%d", &n);

    while (n > 0) {
        printf("%c", ch);
        ch--;
        n--;
    }
    return 0;
}
*/

/*

/*
#include<stdio.h>

int main() {
	char ch;
	int n, i;
	
	scanf("%c", &ch);
	getchar();
	scanf("%d", &n);
	
	// Print all the corresponding characters with ASCII value from ch to ch-n
	for(i = 0; i <= n; i++) {
		printf("%c\n", (char) ch - i);
	}
	
	return 0;
}
*/