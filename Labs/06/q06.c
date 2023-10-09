/*
* Programmer: Muhammad Umar
* Date: 3/10/2023
* Description: A matchstick game between computer and a user in which computer will always win.
*/

#include <stdio.h>

void main(){
    
    int sticks = 21, choice;
    
    printf("\nWelcome to a match-stick game.\n------------------------------\n\nThis game is between computer and you. In this game there are total 21 match-sticks and you have to pick the matchsticks ranging from 1 to 4 in your turn. After your turn, the computer will play its turn. Whoever is forced to pick up the last matchstick loses the game. Starting from you.\n");
    
    //asking for user's choice and then printing the computer's choice based on the user's choice to determine the computer's victory. Also printing the match-sticks left
    while(sticks > 1){
        
        sticks -= 5;
        
        printf("\nYour turn:\n   Please pick a number of sticks (ranging from 1 to 4): "); //to get user's input
        scanf("%d", &choice);
        
        printf("\nNow computer's turn:\n   ");
        
        //to print the computer's choice based on the user's choice
        switch(choice){
            case 1 :
                printf("The computer picks 4 sticks.");
                break;
            
            case 2 :
                printf("The computer picks 3 sticks.");
                break;
                
            case 3 :
                printf("The computer picks 2 sticks.");
                break;
                
            case 4 :
                printf("The computer picks 1 stick.");
                break;
        }
        
        printf("\n\nMatchsticks left : %d\n\n", sticks);
    }
    
    printf("\nAs there is only one stick left and it is your turn, you loses the game. Better luck next time!\n");
} //end main
