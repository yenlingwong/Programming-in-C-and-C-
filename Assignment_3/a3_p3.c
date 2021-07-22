/*
CH-230-A
a3_p3.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
int main() {
    float j ;
    int cm ;
    float convert (int cm);
        
    // Scanning for input in cm
    scanf("%d", &cm);
    // Calling function
    j = convert (cm);
    printf("Result of conversion: %.6f\n", j);
        
    return 0 ;
}

    //function declaration
float convert (int cm) { 
    // Function Definition
    float km;
    km = (float) cm / 100000 ;
    //Converting cm to km
    return km;       
}

    /*
    #include <stdio.h>

float convert(int cm){
    float result = (float) cm/100000;
    return result;
}
int main() {
    int x;
    scanf("%d", &x);
    printf("%f", convert(x));
    return 0;
}
*/
/*
#include<stdio.h>

float convert(int cm);

int main() {
	int cm;
	float km;
	
	scanf("%d", &cm);
	
	// Assign the return value of convert() to float km
	km = convert(cm);
	
	printf("Result of conversion: %f\n", km);
	
	return 0;
}

// Function of type float to convert integer argument cm to float km and return
// it after dividing by 100000
float convert(int cm) {
	float km = cm / 100000.0;
	return km;
}
*/
    
