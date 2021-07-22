/*
CH-230-A
a2_p3.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
int main() {

    int week, day, hour;
    printf("Enter the number of weeks: \n");
    scanf("%d", &week);
    printf("Enter the number of days: \n");
    scanf("%d", &day);
    printf("Enter the number of hours: \n");
    scanf("%d", &hour);

    int sum_week = week * 168; 
    // Number of hours in the total number of weeks
    int sum_day = day * 24;
    // Number of hours in the total number of days
    int total_hours = sum_week + sum_day + hour;

    printf("The total number of hours is %d\n", total_hours);

    return 0;
}
/*
#include<stdio.h>

int main() {
	int weeks, days, hours;
	
	// Input number of weeks, days and hours 
	scanf("%d", &weeks);
	getchar();
	scanf("%d", &days);
	getchar();
	scanf("%d", &hours);
	getchar();
	
	// Multiply weeks by 168 hours/week and days by 24 hours/day and sum them up
	printf("%d\n", (weeks * 168 + days * 24 + hours));
	
	return 0;
}
*/