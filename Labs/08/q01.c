/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Swap any two numbers by making a function
*/

#include <stdio.h>

//to swap two numbers given from user
int swapIntegers(int num1, int num2){

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nFirst Number : %d\nSecond Number : %d\n", num1, num2);
}

void main(){

    int num1, num2;

    printf("\nEnter first number : "); //to get first number from user
    scanf("%d", &num1);

    printf("Enter second number : "); //to get second number from user
    scanf("%d", &num2);

    swapIntegers(num1, num2);
} //end main
