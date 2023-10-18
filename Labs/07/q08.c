/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Take a user input array and print it in ascending order.
*/

#include <stdio.h>

void main(){
    int size;
    
    printf("\nEnter array size (total number of elements) : "); //taking size as user's input
    scanf("%d", &size);
    
    printf("\n");
    
    int arr[size];
    
    //asking user for all the elements
    for(int i = 0; i < size; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    //sorting the array in ascending order
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    printf("\n");
    
    //printing the output
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
} //end main
