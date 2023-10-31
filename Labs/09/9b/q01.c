/*
* Programmer: Muhammad Umar
* Date: 31/10/2023
* Description: Find factorial of any integer using recursion
*/

#include <stdio.h>

//to calculate factorial by taking n and multiplying itwith itself until n = 1.(Recursion)
int calculateFactorial(int num){

    if(num == 1){
        return 1;
    } else {
        return num * calculateFactorial(num-1);
    }
} //end calculate factorial

void main(){

    int n;

    printf("\nEnter the number for which you have to find factorial : "); //to take number as user's input
    scanf("%d", &n);

    int num = calculateFactorial(n);

    printf("\nFactorial of %d = %d\n", n, num);
} //end main
