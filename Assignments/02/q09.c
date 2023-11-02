/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Take a number N and create two NxN 2D Arrays and fill it with spiral incremental numbers (first inwards and then outwards). Print the arrays.
*/

#include <stdio.h>

//to create and print an inward spiral by taking an uninititialized array and its size
void inwards(int arr[][100], int num){
    
    int total = 1;
    
    for(int x = 0; x <= num/2; x++){
        
        //to fill top row from left to right
        for(int j = x; j < num-x; j++){
            arr[x][j] = total++;
        }
        
        if(total == num * num + 1) break; //to break the loop if spiral is filled
        
        //to fill rightmost column from top to bottom   
        for(int i = x+1; i < num-x-1; i++){
            arr[i][num-x-1] = total++;
        }
        
        //to fill bottom row from right to left
        for(int j = num-x-1; j >= x; j--){
            arr[num-x-1][j] = total++;
        }
        
        //to fill leftmost column from bottom to top
        for(int i = num-x-2; i > x; i--){
            arr[i][x] = total++;
        }
        
    }
    
    //printing the inward spiral
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
} //end inwards

//to create and print an outward spiral by taking an uninititialized array and its size
void outwards(int arr[][100], int num){
    
    int total = num*num;
    
    for(int x = 0; x <= num/2; x++){
    
        //to fill top row from right to left
        for(int j = num-x-1; j >= x; j--){
            arr[x][j] = total--;
        }
        
        //to fill leftmost column from top to bottom
        for(int i = x+1; i < num-x; i++){
            arr[i][x] = total--;
        }
        
        //to fill bottom row from left to right
        for(int j = x+1; j < num-x; j++){
            arr[num-x-1][j] = total--;
        }
        
        //to fill rightmost column from bottom to top
        for(int i = num-x-2; i > x; i--){
            arr[i][num-x-1] = total--;
        }
        
    }
    
    //printing the outward spiral
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
} //end outwards

void main(){
    
    int num;
    
    printf("\n");
    
    //to take dimension of the 2D arrays
    do{
        printf("Enter the dimension of matrix : ");
        scanf("%d", &num);
    } while(num < 1 && num > 100);
    
    int arr[num][num];
    
    printf("\n");
    
    inwards(arr, num);
    
    printf("\n");
    
    outwards(arr, num);
} //end main
