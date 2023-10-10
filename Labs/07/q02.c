/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Rotate the array elements to the left by d positions using only one array.
*/

#include <stdio.h>

void main(){
    
    int arr[10000], size, d, i, j;
    
    printf("\nEnter array size(total number of elements) : "); //taking size as user's input
    scanf("%d", &size);
    
    printf("Enter the number(positive whole number) of positions you have to rotate : "); //taking number of positions as user input
    scanf("%d", &d);
    
    printf("\n");
    
    //asking user for all the elements and storing them in an array
    for(i = 0; i < size; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // rotating the array elements at left 
    for(j = 0; j < d; j++){
        for(i = 0; i < size - 1; i++){
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
    
    printf("\n");
    
    // printing output
    for(i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    
    printf("\n");
} //end main
