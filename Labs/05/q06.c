/*
* Programmer: Muhammad Umar
* Date: 19/9/2023
* Description: Write a C program to receive an 8-bit number and then check if its 4th and 7th bits are on. If these bits are found to be on, then put them off.
*/

#include <stdio.h>

void main() {
    
    int num, bit4, bit7;
    
    printf("\nEnter 8-bit number in only 0s and 1s : "); //taking user's input
    scanf("%d", &num);
    
    // finding bit4 and bit7
    bit4 = (num / 1000) % 10;
    bit7 = (num / 1000000) % 10;
    
    // checking bit4 and bit7
    if (bit4 && bit7) {
        num = num - 1000 - 1000000;
    }
    
    printf("\n%08d\n", num);

} //end main
