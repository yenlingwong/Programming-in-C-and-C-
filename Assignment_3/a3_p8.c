/*
CH-230-A
a3_p8.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>

/*
CH-230-A
a3_p8.c
Yen Ling Wong
ywong@jacobs-university.de
*/
 
#include <stdio.h>
 
float sum(float *array, int idx) {
    float sum = 0;
    for(int i = 0; i < idx; i++) {
        sum += array[i];
    }
    return sum;
}
 
float average(float *array, int idx){
    return sum(array, idx) / idx; 
}
 
int main() {
    float returnArray[10];
    int i;

    for(i = 0; i < 10; i++){
        scanf("%f", &returnArray[i]);
        if(returnArray[i] == -99.0){
            break;
        }
    }
    
    printf("%.2f\n", sum(returnArray, i));
    printf("%.3f\n", average(returnArray, i));
 
    return 0;
}
