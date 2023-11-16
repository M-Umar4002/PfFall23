/*
* Programmer: Muhammad Umar
* Date: 25/10/2023
* Description: Sort the shirt details based on age in ascending order and, within the same age, sort them based on price in descending order.
*/

#include <stdio.h>

//to print the shirt details for different cases
void printList(int arr[7][2]){

    printf("Age\tPrice\n");

    for(int i = 0; i < 7; i++){
        printf("%d\t%d\n", arr[i][0], arr[i][1]);
    }
} //end printList

//to sort the shirt details based on age in ascending order
void agesInAscendingOrder(int arr[7][2]){

    for(int i = 0; i < 7; i++){
        for(int j = i+1; j < 7; j++){
            if(arr[j][0] < arr[i][0]){
                int temp1 = arr[j][0];
                arr[j][0] = arr[i][0];
                arr[i][0] = temp1;

                int temp2 = arr[j][1];
                arr[j][1] = arr[i][1];
                arr[i][1] = temp2;
            }
        }
    }
} //end agesInAscendingOrder

//to sort the shirt details based on price in descending order
void pricesInDescendingOrder(int arr[7][2]){

    for(int i = 0; i < 7; i++){
        for(int j = i+1; j < 7; j++){
            if(arr[j][1] > arr[i][1]){
                int temp1 = arr[j][0];
                arr[j][0] = arr[i][0];
                arr[i][0] = temp1;

                int temp2 = arr[j][1];
                arr[j][1] = arr[i][1];
                arr[i][1] = temp2;
            }
        }
    }
} //end pricesInDescendingOrder

void main(){
    
    int shirts[7][2] = {
        {10, 100},
        {40, 400},
        {50, 200},
        {25, 150},
        {35, 500},
        {18, 750},
        {15, 300}
    };

    printf("\nActual List\n");
    printList(shirts);

    printf("\nShirt details based on age in ascending order\n");
    agesInAscendingOrder(shirts);
    printList(shirts);

    printf("\nShirt details based on price in descending order\n");
    pricesInDescendingOrder(shirts);
    printList(shirts);

    printf("\n");
} //end main
