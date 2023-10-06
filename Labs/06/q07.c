/*
* Programmer: Muhammad Umar
* Date: 3/10/2023
* Description: Take a user input array and print the sum of its elements.
*/

#include <stdio.h>

void main(){
    
    int arr[10000], size, i, sum = 0;
    
    printf("\nEnter array size(total number of elements) for which you have to calculate the sum : "); //taking size as user's input
    scanf("%d", &size);
    
    printf("\n");
    
    //asking user for all the elements and calculating their sum
    for(i = 0; i < size; i++){
        
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
        
        sum += arr[i];
    }
    
    printf("\nThe sum of all the elements of given array is %d.\n", sum);
} //end main
