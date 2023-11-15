/*
* Programmer: Muhammad Umar
* Date: 25/10/2023
* Description: Find all different number pairs in 1D array of N integers that have sum equal to integer t.
*/

#include <stdio.h>

//to find all the pairs in the array that have sum equal to t by taking array, its size and the integer t as argument
void findAllPairs(int *arr, int size, int t){
    
    //Finding and printing all the pairs present in the array
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] + arr[j] == t){
                printf("(%d, %d), ", arr[i], arr[j]);
            }
        }
    }
} //end findAllPairs

void main() {
    
    int size, t;
    
    printf("Enter integer t : "); //taking integer t as user's input
    scanf("%d", &t);
    
    printf("\nEnter array size(total number of elements) : "); //taking size as user's input
    scanf("%d", &size);
    
    int arr[size];
    
    //taking elements of array as user's input
    for(int i = 0; i < size; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\n");
    
    findAllPairs(arr, size, t); //calling the function
} //end main
