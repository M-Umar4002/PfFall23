/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Multiply 2x2 matrices using 2D array.
*/

#include <stdio.h>

void main(){
    
    int matrix1[2][2], matrix2[2][2], ans[2][2];
    
    printf("\n");
    
    //taking elements of first array as user's input
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter element of row %d, column %d of first matrix : ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("\n");
    
    //taking elements of second array as user's input
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter element of row %d, column %d of second matrix : ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    //multiplying the matrices
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            } 
        }
    }
    
    printf("\n");
    
    //printing the output
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", ans[i][j]);
            
            if(j == 1){
                printf("\n");
            }
        }
    }
} //end main
