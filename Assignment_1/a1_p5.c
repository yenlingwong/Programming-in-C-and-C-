/* CH-230-A
a1_p5.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
    int main() {
        // Declare and initialize variables
        int x = 2138;
        float y = -52.358925;
        char z = 'G';
        double u = 61.295339687;

        printf("x=%9d\n",x); // prints the value of x over 9 places
        printf("y=%11.5f\n",y); // prints the value of y over 11 places and with a floating point precision of 5
        printf("z=%c\n",z);
        printf("u=%0.7lf\n",u); // prints the value of u with a floating point precision of 7

        return 0;
    }
