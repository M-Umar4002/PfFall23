#include <stdio.h>
#include <math.h>

void inwards(int arr[][100], int num){
    
    int total = 1;
    
    for(int x = 0; x <= num/2 && total <= num*num; x++){
        
        for(int j = x; j < num-x; j++){
            arr[x][j] = total++;
        }
        
        for(int i = x+1; i < num-x-1; i++){
            arr[i][num-x-1] = total++;
        }
        
        for(int j = num-x-1; j >= x; j--){
            arr[num-x-1][j] = total++;
        }
        
        for(int i = num-x-2; i > x; i--){
            arr[i][x] = total++;
        }
        
    }
    
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void main(){
    
    int num;
    
    do{
        printf("Enter the dimension of matrix : ");
        scanf("%d", &num);
    } while(num < 1 && num > 100);
    
    int arr[num][num];
    
    inwards(arr, num);
}
