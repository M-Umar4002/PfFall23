#include <stdio.h>

void inwards(int arr[][100], int num){
    
    int total = 1;
    
    for(int x = 0; x <= num/2; x++){
        
        for(int j = x; j < num-x; j++){
            arr[x][j] = total++;
        }
        
        if(total == num * num + 1) break;
            
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

void outwards(int arr[][100], int num){
    
    int total = 1;
    
    for(int x = num/2; x >= 0; x--){
    
        for(int i = x; i < num - x; i++){
            arr[i][num - x - 1] = total++;
        }
        
        if(total - 1 == 1) break;
        
        for(int j = x + 1; j > 0; j--){
            arr[x + 1][j] = total++;
        }
        
        for(int i = x; i >= x; i--){
            arr[i][x - 1] = total++;
        }
        
        for(int j = x - 1; j <= x + 1; j++){
            arr[x - 1][j] = total++;
        }
        
        // for(int j = num/2; j < num-(num/2)-1; j++){
        //     arr[num/2][j] = total++;
        // }
            
        // for(int i = (num/2)+1; i < num-(num/2)-1; i++){
        //     arr[i][num-(num/2)-1] = total++;
        // }
        
        // for(int j = num-x-1; j >= x; j--){
        //     arr[num-x-1][j] = total++;
        // }
        
        // for(int i = num-x-2; i > x; i--){
        //     arr[i][x] = total++;
        // }
        
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
    
    printf("\n");
    
    do{
        printf("Enter the dimension of matrix : ");
        scanf("%d", &num);
    } while(num < 1 && num > 100);
    
    int arr[num][num];
    
    inwards(arr, num);
    
    printf("\n");
    
    outwards(arr, num);
}
