/*
* Programmer: Muhammad Umar
* Date: 12/9/2023
* Description: Return the solutions using the quadratic formula
*/

#include <stdio.h>
#include <math.h>

void main(){
    
    printf("\n-- Taking Inputs --\n\n");
    
    int a, b, c; // to get user's input
    
    printf("Enter coefficient of the term with power 2 : ");
    scanf("%d", &a);
    
    printf("Enter coefficient of the term with power 1 : ");
    scanf("%d", &b);
    
    printf("Enter the constant : ");
    scanf("%d", &c);
    
    float d, x1, x2; // d for discriminant, x1 for Solution 1 and x2 for solution 2
    
    d = sqrt((b * b) - 4 * a * c);
    
    x1 = (- b + d) / (2 * a);
    x2 = (- b - d) / (2 * a);
    
    printf("\nSolution 1 : %.2f", x1);
    printf("\nSolution 2 : %.2f\n", x2);
} // end point
