/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Take an n x n integer matrix grid. Generate and print a matrix "maxLocal" of size (n-2) x (n-2) by finding the largest value in every continous 3x3 submatrix of the given grid, and store these values in "maxLocal".
*/

#include <stdio.h>

void main(){
    
    int n;
    
    //taking dimension as user's input
    do{
        printf("\nEnter dimension of square matrix (dimension should be greater than or equals to 3) : ");
        scanf("%d", &n);
    } while(n < 3);
    
    printf("\n");
    
    int matrix[n][n], maxLocal[n-2][n-2];
    
    //taking elements of matrix as user's input
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter element of row %d, column %d : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    //identifying the largest value in every continous 3x3 submatrix of the given grid and storing these values in the maxlocal matrix.
    for(int i = 0; i < n-2; i++){
        for(int j = 0, max = matrix[i][j]; j < n-2; j++){
            int max = matrix[i][j];
            for(int k = i; k < i+3; k++){
                for(int m = j; m < j+3; m++){
                    
                    //checking for the maximum value
                    if(matrix[k][m] > max){
                        max = matrix[k][m];
                    }
                }
            }
            maxLocal[i][j] = max;
        }
    }
    
    printf("\nMaxlocal Matrix\n----------------\n");
    
    //printing the maxlocal matrix
    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < n-2; j++){
            printf("%d ", maxLocal[i][j]);
        }
        printf("\n");
    }
} //end main
