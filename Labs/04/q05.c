/*
* Programmer: Muhammad Umar
* Date: 12/9/2023
* Description: By taking input DOB of two persons, check who is older
*/

#include <stdio.h>
#include <math.h>

void main(){
    
    printf("\n-- Taking Inputs --\n\n");
    
    int d1, m1, y1, d2, m2, y2; // to take input DOB of two persons
    
    printf("Enter first person's date, month and year of birth in format (dd/mm/yyyy) : ");
    scanf("%d/%d/%d", &d1, &m1, &y1);
    
    printf("\n");
    
    printf("Enter second person's date, month and year of birth in format (dd/mm/yyyy) : ");
    scanf("%d/%d/%d", &d2, &m2, &y2);
    
    printf("\n");
    
    if(y1 < y2){
        printf("First person is older!");
    } else if(y1 == y2){
        if(m1 < m2){
            printf("First person is older!");
        } else if(m1 == m2){
            if(d1 < d2){
                printf("First person is older!");
            } else if (d1 == d2) {
                printf("Both persons are of same ages!");
            } else {
                printf("Second person is older!");
            }
        } else{
            printf("Second person is older!");
        }
    } else{
        printf("Second person is older!");
    }
  
} // end point
