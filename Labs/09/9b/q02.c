/*
* Programmer: Muhammad Umar
* Date: 31/10/2023
* Description: Finding product of 2 numbers without using multiplication operator and loops. Use recursion and addition only.
*/

#include <stdio.h>

//to multiply two numbers without * sign and loops. Making a recursive function.
int multiply(int num1, int num2){

    if(num2 == 1){
        return num1;
    } else {
        return num1 + multiply(num1, num2-1);
    }
} //end multiply

void main(){

    int num1, num2;

    printf("Enter first number : "); //taking first number as user's input
    scanf("%d", &num1);

    printf("Enter second number : "); //taking second number as user's input
    scanf("%d", &num2);

    int ans = multiply(num1, num2);

    printf("\nAnswer : %d\n", ans);
} //end main
