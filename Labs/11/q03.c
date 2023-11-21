/*
* Programmer: Muhammad Umar
* Date: 21/11/2023
* Description: Make a structure named Date to store the elements day, month and year to store the dates. Compare two dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
*/

#include <stdio.h>
#include <string.h>

//declaring a struct of date
typedef struct Date {
    int day, month, year;
} Date;

void main(){
    
    Date allDates[2];
    
    //taking the data of all dates from user
    for(int i = 0; i < 2; i++){
        printf("\nEnter data of date %d\n", i+1);
        printf("Enter day of date %d : ", i+1);
        scanf("%d", &allDates[i].day);
        printf("Enter month of date %d : ", i+1);
        scanf("%d", &allDates[i].month);
        printf("Enter year of date %d : ", i+1);
        scanf("%d", &allDates[i].year);
    }
    
    //comparing both dates and printing the output respectively according to the comparision.
    if(allDates[0].day == allDates[1].day && allDates[0].month == allDates[1].month && allDates[0].year == allDates[1].year){
        printf("\nDates are equal\n");
    } else {
        printf("\nDates are not equal\n");
    }
    
} //end main
