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
/*
#include<stdio.h>

void sumTemp(double *arr, int size);
void listTempsCelsius(double *arr, int size);
void listTempsFahrenheit(double *arr, int size);
void averageTemps(double *arr, int size);

int main() {
    char c;
    int n, i;

    scanf("%c", &c);
    getchar();

    scanf("%d", &n);
    getchar();

    double tempsCelsius[n];

    // Input temperatures inside of the array one by one
    for(i = 0; i < n; i++) {
        scanf("%lf", &tempsCelsius[i]);
    }

    switch (c) {
        case 's':
            sumTemp(tempsCelsius, n);
            break;
        case 'p':
            listTempsCelsius(tempsCelsius, n);
            break;
        case 't':
            listTempsFahrenheit(tempsCelsius, n);
            break;
        default:
            averageTemps(tempsCelsius, n);
            break;
    }
    return 0;
}

void sumTemp(double *arr, int size) {
    int i;
    double sum;
    // Iterate through each element of the array and add them up to sum
    for(i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    printf("%lf\n", sum);
}

void listTempsCelsius(double *arr, int size) {
    int i;
    // Print each element of the array
    for(i = 0; i < size; i++) {
        printf("%lf\n", *(arr + i));
    }
}

void listTempsFahrenheit(double *arr, int size) {
    int i;
    double fahrenheit;
    for(i = 0; i < size; i++) {
        // Convert from celsius to fahrenheit each element we iterate through
        fahrenheit = (9 / 5.0) * (*(arr + i)) + 32;
        printf("%lf\n", fahrenheit);
    }
}

void averageTemps(double *arr, int size) {
    int i;
    double average, sum;
    // Iterate through each element of the array and add them up to sum
    for(i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    average = sum / size;
    printf("%lf\n", average);
}
*/
