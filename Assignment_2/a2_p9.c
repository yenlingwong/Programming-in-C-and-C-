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
