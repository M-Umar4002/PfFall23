/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Take password of at least 8 characters from user. Compare it with the passord "Secure123" and printing the output according to it.
*/

#include <stdio.h>

int decideCarUsage(int carNum, int dayNum){
    
    if((dayNum == 1 || dayNum == 3 || dayNum == 5 || dayNum == 7) && carNum % 2 != 0){
        return 1;
    } else if((dayNum == 2 || dayNum == 4 || dayNum == 6) && carNum % 2 == 0) {
        return 1;
    }
    return 0;
}

void main(){

    int carNum, dayNum;

    printf("\nEnter numeric part of your car's number : ");
    scanf("%d", &carNum);

    do{
        printf("Enter the day number of the week : ");
        scanf("%d", &dayNum);
    } while(dayNum < 1 && dayNum > 7);

    int checkValue = decideCarUsage(carNum, dayNum);

    if(checkValue == 1){
        printf("\nCar should be used!\n");
    } else {
        printf("\nCar should not be used!\n");
    }
} //end main
