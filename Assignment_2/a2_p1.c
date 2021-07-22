/*
CH-230-A
a2_p1.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

    int main() {
    
    double d1;
    double d2;
    
    scanf("%lf", &d1);
    scanf("%lf", &d2);
    
    double sum = d1 + d2;
    double difference = d1 - d2;
    double square1 = d1 * d1;


    int i1, i2;
    scanf("%d", &i1);
    scanf("%d", &i2);

    int addition = i1 + i2;
    int product = i1 * i2;

    char c1;
    char c2;

    getchar();
    scanf("%c", &c1);
    getchar();
    scanf("%c", &c2);

    int charsum = c1 + c2;
    int charproduct = c1 * c2;

    printf("sum of doubles=%lf\n", sum);
    printf("difference of doubles=%lf\n", difference);
    printf("square=%lf\n", square1);
    printf("sum of integers=%d\n", addition);
    printf("product of integers=%d \n", product); 
    printf("sum of chars=%i\n", charsum);
    printf("product of chars=%i\n", charproduct);
    printf("sum of chars=%c\n", charsum);
    printf("product of chars=%c\n", charproduct);

    return 0;
}
