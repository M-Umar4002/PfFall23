/*
* Programmer: Muhammad Umar
* Date: 19/9/2023
* Description: Flip first four bits with last four bits of an 8-bit number
*/

#include <stdio.h>

void main(){
    
    int num, firstFour, lastFour;
    
    printf("\nEnter 8-bit number which has at least two digits : "); //taking user's input
    scanf("%d", &num);
    
    //checking if given number contains at least two digits or not
    if(num < 10){
        printf("\nSorry, your number does not contain at least two digits.");
        return;
    }
    
    //to convert first four bits into last four
    lastFour = num / 10000;
    
    //to convert last four bits into first four
    firstFour = num % 10000;
    
    printf("\n%04d%04d", firstFour, lastFour);
} //end main
