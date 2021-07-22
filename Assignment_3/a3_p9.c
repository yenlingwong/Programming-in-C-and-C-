/*
CH-230-A
a3_p9.c
Yen Ling Wong
ywong@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

double sum25(double v[], int n){
//Get sum if position 2 and 5 are valid
    if (n > 5){
        double sum = v[2] + v[5];
        return sum;
    } else {
        return -111;
    }
}

int main()
{
    int given_int;
    scanf("%d", &given_int);
    double array[20];
    int i = 0;
    for (i = 0; i < given_int; i++) {
        scanf("%lf", &array[i]);
    }

    if (sum25(array, given_int) != -111) {
        printf("sum=%lf\n", sum25(array, given_int));
    } else {
        printf("One or both positions are invalid\n");
    }

    return 0;
}
