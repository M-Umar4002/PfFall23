/*
* Programmer: Muhammad Umar
* Date: 19/9/2023
* Description: Write a program to take original amount of shopping from user and print original amount, discount and final amount according to it.
*/

#include <stdio.h>

void main() {
    
    int originalAmount, discount, finalAmount;
    
    printf("\nEnter cost of shopping (in Rs.) : "); //taking user's input
    scanf("%d", &originalAmount);
    
    //checking original amount with different criterias
    if(originalAmount >= 2000 && originalAmount <= 4000) {
        discount = 0.2 * originalAmount;
    } else if(originalAmount >= 4001 && originalAmount <= 6000) {
        discount = 0.3 * originalAmount;
    } else if(originalAmount > 6000) {
        discount = 0.5 * originalAmount;
    } else {
        discount = 0;
    }
    
    finalAmount = originalAmount - discount;
    
    //printing output
    printf("\n\n-----------------------------------\n\n");
    printf("Actual Amount : Rs. %d\nSaved Amount : Rs. %d\nAmount after Discount : Rs. %d", originalAmount, discount, finalAmount);
    printf("\n\n-----------------------------------\n");
    
} //end main
