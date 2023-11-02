/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Take a number from user, calculate and print it's persistence. Reapeat the process until EOF has been entered via the keyboard.
*/

#include <stdio.h>

//to calculate and return persistence of given number by taking the number
int calculatePersistence(int num){
    
    int count = 0;
    
    //to calculate persistence if the number is greater or equals to 10 till it remains greater or equals to 10
    while(num >= 10){
        int product = 1;
        
        //to calculate the product of all the digits in a number
        while(num > 0){
            product *= num % 10;
            num /= 10;
        }
        
        num = product;
        count++;
    }
    
    return count;
} //end calculatePersistence

void main(){
    
    int num;
    
    printf("\n");
    
    //to take number as user's input until user enters any negative number
    do{
        printf("Enter any positive integer (negative number will terminate the program) : ");
        scanf("%d", &num);
        
        if(num >= 0){
            int ans = calculatePersistence(num);
            
            printf("\nPersistence of %d is %d.\n\n\n", num, ans);
        }
    } while(num >= 0);
} //end main
