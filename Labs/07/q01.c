/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Divide two numbers without using division operator
*/

#include <stdio.h>

void main(){
    
    int num1, num2;
    float ans = 0;
    
    printf("\nEnter the numerator : "); //taking numerator in user's input
    scanf("%d", &num1);
    
    printf("Enter the denominator : "); //taking denominator in user's input
    scanf("%d", &num2);
    
    //iterating loop until numereator becomes zero
    while(num1 > 0){
        
        //making condition to round down the answer
        if(num1 >= num2){
            ans++;
        }
        
        num1 -= num2; 
    }
    
    printf("\nAnswer : %0.2f\n", ans);
} //end main
