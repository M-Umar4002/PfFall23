/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Print the following pattern for n. This is for n = 5
                    *****
                    *****
                    *****
                 ***********
                    *   *
                      |
                     \_/
            
                     | |
                *************
                **  *****  **
                **  *****  **
                **  *****  **
                **  *****  **
                    *****
                    ** **
                    ** **
                    ** **
                    ** **
                    ** **
                 ***** *****
*/

#include <stdio.h>

//printing the hat according to user's input
void hat(int n){
    
    for(int i = 1; i <= n - 2; i++){
        for(int j = 1; j < n; j++){
            printf(" ");
        }
        for(int k = 1; k <= n; k++){
            printf("*");
        }
        printf("\n");
    }
    printf(" ");
    
    for(int i = 1; i <= 3*n-4; i++){
        printf("*");
    }
} //end hat

//printing the face according to user's input
void face(int n){
    
    //printing thew eyes
    for(int i = 1; i <= n - 1; i++){
        printf(" ");
    }
    printf("*");
    for(int j = 1; j <= n - 2; j++){
        printf(" ");
    }
    printf("*\n");
                
    //printing thew nose            
    for(int i = 1; i <= 3*(n/2); i++){
        printf(" ");
    }
    printf("|\n");
        
    //printing thew mouth    
    for(int i = 1; i < 3*(n/2); i++){
        printf(" ");
    }
    printf("\\_/\n\n");
} //end face

//printing the neck according to user's input
void neck(int n){
    for(int i = 1; i < 3*(n/2); i++){
        printf(" ");
    }
    printf("| |\n");
} //end neck

//printing the body according to user's input
void body(int n){
    for(int i = 1; i <= 3*n-2; i++){
        printf("*");
    }
    printf("\n");
    
    for(int i = 1; i <= n - 1; i++){
        
        for(int j =1; j <= n/2; j++){
            printf("*");
        }
        
        for(int k = 1; k <= n/2; k++){
            printf(" ");
        }
        
        for(int j =1; j <= n; j++){
            printf("*");
        }
        
        for(int k =1; k <= n/2; k++){
            printf(" ");
        }
        
        for(int j =1; j <= n/2; j++){
            printf("*");
        }
        
        printf("\n");
    }
} //end body

//printing the legs according to user's input
void legs(int n){
    for(int k = 1; k <= n - 1; k++){
        printf(" ");
    }
    for(int j = 1; j <= n; j++){
        printf("*");
    }
    printf("\n");
    
    for(int i = 1; i <= n; i++){
        
        for(int k = 1; k <= n - 1; k++){
            printf(" ");
        }
        
        for(int j = 1; j <= n/2; j++){
            printf("*");
        }
        
        printf(" ");
        
        for(int j = 1; j <= n/2; j++){
            printf("*");
        }
        
        printf("\n");
    }
} //end legs

//printing the shoes according to user's input
void shoes(int n){
    printf(" ");
    
    for(int i = 1; i < 3*(n/2); i++){
        printf("*");
    }
    
    printf(" ");
    
    for(int i = 1; i < 3*(n/2); i++){
        printf("*");
    }
} //end shoes

void main(){
    
    int num;
    
    printf("\nEnter any positive odd number greater than '2' : "); //taking user's input
    scanf("%d", &num);
    
    printf("\n");
    
    hat(num);
    
    printf("\n");
    
    face(num);
    neck(num);
    body(num);
    legs(num);
    shoes(num);
    
    printf("\n");
} //end main
