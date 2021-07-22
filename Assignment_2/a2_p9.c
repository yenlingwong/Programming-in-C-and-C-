/*
CH-230-A
a2_p9.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char m;
    scanf("%c", &m);

    if ( (m >= 'a' && m <= 'z') || (m >= 'A' && m <= 'Z') ) {
        printf("%c is a letter\n", m);
    }
    else if ( m >= '0' && m <= '9') {
        printf("%c is a digit\n", m);
    }
    else {
        printf("%c is some other symbol\n", m);
    }
    return 0;
}
/*
#include<stdio.h>
#include<ctype.h>

int main() {
	char c;
	
	scanf("%c", &c);
	
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) // Check if c is letter
		printf("%c is a letter\n", c);
	else if (c >= '0' && c <= '9') // Else check if it is a digit
		printf("%c is a digit\n", c);
	else 
		printf("%c is some other symbol\n", c); // Else it is a symbol
	
	return 0;
}
*/