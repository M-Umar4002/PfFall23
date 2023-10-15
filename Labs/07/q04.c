/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Check if the array is symmetric or not
*/

#include <stdio.h>
#include <stdbool.h>

//checking the symmetry of the array
bool symmetricity(int matrix[1000][1000], int dim){
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            if(matrix[i][j] != matrix[j][i]){
                return false;
            } 
        }
    }
    return true;
}

void main(){
    
    int matrix[1000][1000], dim;
    
    printf("\nEnter matrix dimension : "); //taking dimension as user's input
    scanf("%d", &dim);
    
    printf("\n");
    
    //taking elements of array as user's input
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            printf("Enter element of row %d, column %d : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    bool isSymmetric = symmetricity(matrix, dim);
    
    printf("\n");
    
    //printing if the array is symmetric or not
    if(isSymmetric){
        printf("Array is symmetric.");
    } else {
        printf("Array is not symmetric.");
    }
    
    printf("\n");
    
    //printing the array
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            printf("%d ", matrix[i][j]);
            
            //adding the new line after every row is completed
            if(j == dim - 1){
                printf("\n");
            }
        }
    }
} //end main
