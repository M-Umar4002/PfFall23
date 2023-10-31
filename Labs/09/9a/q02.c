/*
* Programmer: Muhammad Umar
* Date: 31/10/2023
* Description: Reverse the given array by making a function and using pointers to reverse it.
*/

#include <stdio.h>

//to reverse given array by using pointers
void reverse(int *arr, int size){

    for(int i = 0; i < size/2; i++){
        int tmp = *(arr + i);
        *(arr + i) = *(arr+size-i-1);
        *(arr+size-i-1) = tmp;
    }
}

void main(){

    int arr[10];

    printf("\n");

    //to take elements of array as user's input
    for(int i = 0; i < 10; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nGiven Array\n");

    //printing given array
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\nReversed Array\n");

    reverse(arr, 10);

    //printing reversed array
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
} //end main
