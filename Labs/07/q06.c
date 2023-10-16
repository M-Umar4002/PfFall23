/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Take an array with N elements as input, and then output the frequency of each element present in the array.
*/

#include <stdio.h>

void main(){
    
    int arr[10000], N, freq[10000];
    
    printf("\nEnter size of array : "); //taking size as user' input
    scanf("%d", &N);
    
    printf("\n");
    
    // taking all elements of array as input
    for(int i = 0; i < N; i++){
        printf("Enter element %d : " , i + 1);
        scanf("%d", &arr[i]);
    }
    
    //calculating the frequency of each element
    for(int i = 0; i < N; i++){
        freq[arr[i]]++;
    }
    
    printf("\n");
    
    //printing the frequeny of each element present in the array
    for(int i = 0; i < N; i++){
        if(!freq[i]){
            continue;
        }
        printf("Frequency of %d = %d\n", i, freq[i]);
    }
} //end main
