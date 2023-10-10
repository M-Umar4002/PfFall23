/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Take a number from user and count the sum of their digits.
*/

#include <stdio.h>

void main(){
    
    int num, sum = 0;
    
    printf("\nEnter any positive whole number : "); //taking user's input
    scanf("%d", &num);
    
    //calculating the sum of each digit
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    
    printf("\nSum : %d\n", sum);
} //end main
