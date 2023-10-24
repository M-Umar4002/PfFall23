/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Take password of at least 8 characters from user. Compare it with the passord "Secure123" and printing the output according to it.
*/

#include <stdio.h>

void processArray(int arr[], int size){
    arr[size];
    
    int min = arr[0]; int max = arr[0], sum = 0;
    
    for(int i = 0; i < size; i++){
        sum += arr[i];
        
        if(arr[i] > max){
            max = arr[i];
        }
        
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Array Sum = %d\nMaximum value = %d\nMinimum value = %d", sum, max, min);
}

void main(){
    
    int size;

    printf("\nEnter array size(total number of elements) : "); //taking size as user's input
    scanf("%d", &size);

    int arr[size];

    //asking user for all the elements and storing them in an array
    for(int i = 0; i < size; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    processArray(arr, size);
}
