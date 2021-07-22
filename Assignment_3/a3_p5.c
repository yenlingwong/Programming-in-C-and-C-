/*
CH-230-A
a3_p5.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char c;
    int n;
    double sum = 0;
    
    //Enter a character
    printf("Enter a character s, p or t\n");
    scanf("%c", &c);

    //Enter an integer n
    printf("Enter an integer number\n");
    scanf("%d", &n);
    double temp[n];

    //Enter n double values
    printf("Enter %d double (s) \n", n);

    // Reading n number of doubles in celcius
    for (int i = 0; i < n;) {
        scanf("%lf", &temp[i]);
        i++;
    }
        
    switch (c){
        case 's':
            for (int j = 0; j < n;) {
                sum = sum + temp[j];
                j++;
            }
            // Calculating the sum
            printf("%f", sum);
            break;
        
        case 'p':
            printf("List of Celsius Temperatures");
            for (int k = 0; k < n; k++){
                printf("%lf\n", temp[k]);
            }
            break;
        
        case 't':
            printf("List of Fahrenheit Temperatures: \n");
            for (int l = 0; l < n; l++) {
                printf("%lf\n", (9/5 * temp[l] +32));
            } 
            break;    
        
        default:
            printf("Arithmetic mean of temperatures is = %lf", sum / n);
            break;
        }

    return 0;
}
