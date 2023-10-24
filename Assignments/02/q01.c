/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Take total no. of batsmen and innings. Then take runs of each batsman in all innings and calculate their total runs scored, average runs per inning, highest score in single inning, total centuries and half centuries individually.
*/

#include <stdio.h>
#include <limits.h>

void main(){
    
    int totalBatsmen, totalInnings;

    printf("\nEnter total number of batsmen : "); //taking total no. of batsmen as user's input
    scanf("%d", &totalBatsmen);
    
    printf("Enter total number of innings : "); //taking total no. of innings as user's input
    scanf("%d", &totalInnings);
    
    printf("\n");
    
    int statistics[totalBatsmen][totalInnings];

    //taking runs of each batsman in all the innings
    for(int i = 0; i < totalBatsmen; i++){
        for(int j = 0; j < totalInnings; j++){
            printf("Enter runs of batsman %d in inning no. %d : ", i+1, j+1);
            scanf("%d", &statistics[i][j]);
        }
        printf("\n");
    }
    
    //to calculate and display for each batsman their total runs scored, average runs per inning, highest score in single inning, total centuries and half centuries individually.
    for(int i = 0; i < totalBatsmen; i++){
        
        int totalRuns = 0, highScore = INT_MIN, totalCent = 0, totalHalfCent = 0;
        
        for(int j = 0; j < totalInnings; j++){
            
            totalRuns += statistics[i][j]; //calculating total runs
            
            //finding ighest score per inning
            if(statistics[i][j] > highScore){
                highScore = statistics[i][j];
            }
            
            //calculating total centuries and half centuries
            if(statistics[i][j] >= 100){
                totalCent++;
            } else if(statistics[i][j] >= 50){
                totalHalfCent++;
            }
        }
        printf("\nStatistics for Batsman no. %d\n------------------------------\n\nTotal Runs : %d\nAverage Runs : %d\nHighest Score : %d\nTotal Centuries : %d\nTotal Half Centuries : %d\n\n", i+1, totalRuns, totalRuns/totalInnings, highScore, totalCent, totalHalfCent);
    }
} //end main
