/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Take numeric part of the car's number and day number of the week from user. Check whether the car should be used or not by making the function and returning a value from it. The car could only be used if both (the car's number and the day's number) are even or odd.
*/

#include <stdio.h>

//to decide whether the car should be used or not by taking numeric part of car number and day number of the week
int decideCarUsage(int carNum, int dayNum){
    
    //checking for odd and even day numbers separately
    if((dayNum == 1 || dayNum == 3 || dayNum == 5 || dayNum == 7) && carNum % 2 != 0){
        return 1;
    } else if((dayNum == 2 || dayNum == 4 || dayNum == 6) && carNum % 2 == 0) {
        return 1;
    }
    return 0;
} //end decideCarUsage

void main(){

    int carNum, dayNum;

    printf("\nEnter numeric part of your car's number : "); //taking numeric part of car's number as user's input
    scanf("%d", &carNum);
    
    //taking day number of the week as user's input until it lies between 1 to 7
    do{
        printf("Enter the day number of the week : ");
        scanf("%d", &dayNum);
    } while(dayNum < 1 && dayNum > 7);

    int checkValue = decideCarUsage(carNum, dayNum);
    
    //to print the output based on the value returned by the function
    if(checkValue == 1){
        printf("\nCar should be used!\n");
    } else {
        printf("\nCar should not be used!\n");
    }
} //end main
