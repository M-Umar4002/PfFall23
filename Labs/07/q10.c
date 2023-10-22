/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Take an array with N elements and a number S as input, and find a continuous sub-array which adds to a given number S. In case of multiple subarrays, return the subarray which comes first on moving from left to right.
*/

#include <stdio.h>

void main(){
    int N, S;
    
    printf("\nEnter number S : "); //taking a number S as user's input
    scanf("%d", &S);
    
    printf("Enter arraty size (total number of elements) : "); //taking array size as user's input
    scanf("%d", &N);
    
    printf("\n");
    
    int A[N];
    
    //asking user for all the elements as storing them in an array
    for(int i = 0; i < N; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &A[i]);
    }
    
    //making nested loop to check all the possibilities
    for(int i = 0; i < N; i++){
        for(int j = 0, sum = 0; i+j < N; j++){
            sum += A[i+j];
            
            //checking sum after adding if it is equal to given number "S"
            if(sum == S){
                printf("\nThe elements of index from %d to %d when summed results in the output of %d.\n", i, i+j, S);
                i=N;
            } else if(i == N-1 && i+j == N-1){
                printf("\nThere is no sub array which adds to a given number number %d.\n", S);
            }
        }
    }
} //end main
