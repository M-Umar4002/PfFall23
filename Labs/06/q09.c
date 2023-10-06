/*
* Programmer: Muhammad Umar
* Date: 3/10/2023
* Description: Find the minimum and maximum number in an array.
*/

#include <stdio.h>

void main(){
    
    int arr[10000], min, max, size, i;
    
    printf("\nEnter array size(total number of elements) : "); //taking size as user's input
    scanf("%d", &size);
    
    printf("\n");
    
    //asking user for all the elements and storing them in an array
    for(i = 0; i < size; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    min = arr[0], max = arr[0];
    
    //checking each number in the array to find minimum and maximum numbers
    for(i = 1; i < size; i++){
        
        //finding minimum number
        if(arr[i] < min){
            min = arr[i];
        }
        
        //finding maximum number
        if(arr[i] > max){
            max = arr[i];
        }
        
    }
    
    printf("\nMinimum number = %d\nMaximum number = %d", min, max);
} //end main
