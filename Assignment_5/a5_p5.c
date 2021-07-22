/*
CH-230-A
a5_p5.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int n;
double v[50];
double w[50];

// Declaring global variables

double scalar(double v[n], double w[n]) {
    double product;
    for ( int i = 0; i < n; i++) {
        product += v[i] * w[i];
    }

    return product;
}

double vsmallest(double v[n]) {
    for (int j = 1; j < n; j++) {
        if ( v[j] < v[0] ) {
            v[0] = v[j];
        }
    }

    return v[0];
}

int v_position_smallest(double v[n]) {
    int sval = 0 ;
    int position ;
     for (int i = 0; i < n; i++) {
        if ( sval > v[i] ) {
            position = i;
        }
    }

    return position ;
}

double vlargest(double v[n]) {
    for (int j = 0; j < n; j++) {
        if ( v[j] > v[n] ) {
            v[n] = v[j];
        }
    }

    return v[n];
}

int v_position_largest(double v[n]){
    double lval = v[0];
    int position;

    for (int i = 1; i <= n; i++) {
        if (lval < v[i]) {
            lval = v[i];
            position = i;
        }
    }
    
    return position;
}

double wsmallest(double w[n]) {
    for (int j = 1; j < n; j++) {
        if ( w[j] < w[0] ) {
            w[0] = w[j];
        }
    }

    return w[0];
}

int w_position_smallest(double w[n]) {
    int sval = 0 ;
    int position ;
     for (int i = 0; i < n; i++) {
        if ( sval > w[i] ) {
            position = i;
        }
    }

    return position ;
}

double wlargest(double w[n]) {
    for (int j = 0; j < n; j++) {
        if ( w[j] > w[n] ) {
            w[n] = w[j];
        }
    }

    return w[n];
}

int w_position_largest(double w[n]){
    double lval = w[0];
    int position;

    for (int i = 1; i <= n; i++) {
        if (lval < w[i]) {
            lval = w[i];
            position = i;
        }
    }
    
    return position;
}

int main() {

    scanf("%d", &n);
    // Reading integer n from the keyboard

    for ( int i = 0; i < n; i++){
        scanf("%lf", &v[i]);
    }
    // Reading elements into V

    for ( int i = 0; i < n; i++){
        scanf("%lf", &w[i]);
    }
    // Reading elements into W

    printf("Scalar product=%lf\n", scalar(v,w));
    // Printing scalar products

    printf("The smallest = %lf\n", vsmallest(v));
    // Printing value of the smallest element in V

    printf("Position of smallest = %d\n", v_position_smallest(v));
    // Printing position of smallest element in V

    printf("The largest = %lf\n", vlargest(v));
    // Printing value of the largest element in V

    printf("Position of largest = %d\n", v_position_largest(v));
    // Printing position of largest element in V

    printf("The smallest = %lf\n", wsmallest(w));
    // Printing value of the smallest element in w

    printf("Position of smallest = %d\n", w_position_smallest(w));
    // Printing position of smallest element in W

    printf("The largest = %lf\n", wlargest(w));
    // Printing value of the largest element in W

    printf("Position of largest = %d\n", w_position_largest(w));
    // Printing position of largest element in W
    

    return 0 ;
}
