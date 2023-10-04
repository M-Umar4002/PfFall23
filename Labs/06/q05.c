/*
* Programmer: Muhammad Umar
* Date: 3/10/2023
* Description: Print pattern of numbers.
*/

#include <stdio.h>

void main(){
    
    printf("\n");
    
    //making loop for printing a pattern
    for(int i = 0; i <= 6; i++){
        
        //checking even and odd
        if(i % 2 == 0){
            printf("%d\t%d\t%d\t%d", i, i, i, i);
        } else {
            printf("\t%d\t%d", i, i);
        }
        
        printf("\n");
    }
} //end main
