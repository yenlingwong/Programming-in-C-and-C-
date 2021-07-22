/*
CH-230-A
a2_p7.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
int main() {
    int i = 8;
    while (i >= 4) {
        printf("i is %d\n", i);
        i--;
    }
    
    printf("That's it.\n");
    return 0;
}

/*
#include <stdio.h>

int main() {
	int i = 8;
	
	// Printf was the only statement that was being iterated over
	while (i >= 4) { // Placing both statements inside {} so i decrements
		printf("i is %d\n", i);
		i--;
	}
	printf("That's it.\n");
	
	return 0;
}
*/