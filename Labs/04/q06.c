/*
* Programmer: Muhammad Umar
* Date: 12/9/2023
* Description: input any number "n" and print the diamond.
                if n = 4, output will be:
		   *  
                  * *
                 *   *
                *     * 
                 *   *
                  * *
                   *
*/

#include <stdio.h>

void main() {
    
    int n; //to get user's input
    
    printf("Enter positive whole integer : ");
    scanf("%d", &n);
    
    printf("\n");
    
    int i = 1, j, k; //making variable i for changing line, j for printing "*", k for printing space
    
    
    //making top half of the pattern
    while(i <= n){
        
        k = 1;
        
        while(k <= n - i){
            printf(" ");
            k++;
        }
        
        if(i == 1){
            printf("*");
        } else {
            
            j = 1;
                
            while (j <= 2){
                printf("*");
                    
                k = 1;

                while(k < 2 * i - 2){
                    printf(" ");
                    k = k + 1;
                }
    
                j++;
            }
        }
        
        printf("\n"); //moving to new line
        i++;
    }
    
    //making lower half of the pattern
    i = n - 2;
    while(i >= 0){
        
        k = n;
        
        while(k > i + 1){
            printf(" ");
            k--;
        }
        
        if(i == 0){
            printf("*");
        } else {
            
            j = 1;
                
            while (j <= 2){
                printf("*");
                    
                k = (2 * i) - 1;
            
                while(k >= 1){
                    printf(" ");
                    k--;
                }
    
                j++;
            }
        }
        
        printf("\n"); //moving to new line
        i--;
    }
} //end main
