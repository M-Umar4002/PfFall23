#include <stdio.h>

void main() {
    int originalPrice, discountPercentage;
    
    printf("\n== Sale Price Calculating Program ==\n");
    printf("\n-- Taking Inputs --\n");
    
    printf("\nEnter original price in Rs. : ");
    scanf("%d", &originalPrice);
    
    printf("Enter discount percentage : ");
    scanf("%d", &discountPercentage);
    
    printf("\n The sale price is Rs. %d.\n", originalPrice - (discountPercentage * originalPrice)/100);
}
