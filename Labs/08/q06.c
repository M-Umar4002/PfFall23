/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Take an array of integers and its size and calculate the sum, maximum, and minimum values in the array by making a function.
*/

#include <stdio.h>

//to find the sum, minimum and maximum value of the array by taking array and its size
void processArray(int arr[], int size){
    arr[size];
    
    int min = arr[0], max = arr[0], sum = 0;
    
    //to calculate te sum and find minimum and maximum value
    for(int i = 0; i < size; i++){
        sum += arr[i]; //calculating the sum
        
        //finding maximum value
        if(arr[i] > max){
            max = arr[i];
        }
        
        //finding minimum value
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("\nArray Sum : %d\nMaximum Value : %d\nMinimum Value : %d\n", sum, max, min);
} //end processArray

void main(){
    
    int size;

    printf("\nEnter array size(total number of elements) : "); //taking size as user's input
    scanf("%d", &size);
    
    printf("\n");
    
    int arr[size];

    //asking user for all the elements and storing them in an array
    for(int i = 0; i < size; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    processArray(arr, size);
} //end main
