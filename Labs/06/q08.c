/*
* Programmer: Muhammad Umar
* Date: 3/10/2023
* Description: Read n number of values in an array and display it in reverse order.
*/

#include <stdio.h>

void main(){
    
    int arr[10000], revArr[10000], n, i;
    
    printf("\nEnter array size(total number of elements) : "); //taking size as user's input
    scanf("%d", &n);
    
    printf("\n");
    
    //asking user for all the elements and storing them in an array
    for(i = 0; i < n; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\n");
    
    //displaying the array in reverse order
    for(i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
} //end main
