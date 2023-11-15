/*
* Programmer: Muhammad Umar
* Date: 25/10/2023
* Description: Find all Ramanujan-Hardy numbers less than n^3.
*/

#include <stdio.h>

//to find and print all Ramanujan-Hardy numbers less than n^3
void printRamanujanNumbers(int n){
    
    for(int i = 1; i < n*n*n; i++){
        for(int j = i; j < n*n*n; j++){
            for(int k = j; k < n*n*n; k++){
                for(int l = 1; l < n*n*n; l++){
                    
                    //checking if Ramanujan's number
                    if((i != k && i != l && j != k && j != l) && (i*i*i + j*j*j == k*k*k + l*l*l)){
                        printf("%d\n", i*i*i + j*j*j);
                    }
                }
            }
        }
    }
} //end printRamanujanNumbers

void main(){
    
    int n;
    
    printf("\nEnter number n to get Ramanujan-Hardy numbers less than n^3 : ");
    scanf("%d", &n);
    
    printf("\n");
    
    printRamanujanNumbers(n);
} //end main
