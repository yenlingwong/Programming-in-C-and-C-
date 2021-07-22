/* CH-230-A
a1_p4.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
    int main() {
        int x = 17, y =4; 
        int sum; /* Result of the sum of x and y */
        int product; /*Result of the product of x and y*/
        int difference; /*Result of the difference between x and y */
        float division; /*Result of the division between x and y */
        int remainder; /*Remainder of the division between x and y*/
        
        sum = x + y ;
        product = x * y ;
        difference = x - y ;
        division = (float) x / y ;
        remainder = x % y;

        printf("x=%d\n",x);
        printf("y=%d\n",y);
        printf("sum=%d\n",sum);
        printf("product=%d\n",product);
        printf("difference=%d\n",difference);
        printf("division=%f\n",division);
        printf("remainder of division=%d\n",remainder);

        return 0;
    }
