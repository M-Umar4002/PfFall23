/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Calculate discounts based on customer loyalty and purchase history of a coffee shop. Take total purchase amount and total number of visits as input and calculate the discount amount by making a function.
*/

#include <stdio.h>

//to calculate the discount and return the discount amount by taking original price and total number of visits of past
int calculateDiscount(int originalPrice, int totalVisits){
    
    int discountPrice = originalPrice;
    
    //calculating discount amount with different criterias
    if(totalVisits > 10 && originalPrice >= 50){
        discountPrice = originalPrice - (0.15 * originalPrice);
    } else if(totalVisits > 5 && originalPrice >= 30){
        discountPrice = originalPrice - (0.1 * originalPrice);
    }
    return discountPrice;
}

void main(){
    
    int originalPrice, totalVisits;
    
    printf("\nEnter your total purchase amount (in dollars) : "); //taking origianl price as user's input
    scanf("%d", &originalPrice);
    
    printf("Enter the number of times you have visited the shop in past : "); //taking total visits of past as user's input
    scanf("%d", &totalVisits);
    
    int discountPrice = calculateDiscount(originalPrice, totalVisits);
    
    printf("\nDiscount Amount : $ %d\n", discountPrice);
} //end main
