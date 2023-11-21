/*
* Programmer: Muhammad Umar
* Date: 21/11/2023
* Description: Make a structure named Date to store the elements day, month and year to store the dates. Compare two dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
*/

#include <stdio.h>
#include <string.h>

//declaring a struct of date
typedef struct Part {
    char serialNumber[3];
    int yearOfManufacture;
    char material[20];
    int quantity;
} Part;

void main(){
    
    int totalParts;
    
    printf("Enter total no. of parts : ");
    scanf("%d", &totalParts);
    
    Part allParts[totalParts];
    
    //taking the data of all dates from user
    for(int i = 0; i < totalParts; i++){
        printf("\nEnter data for part %d\n", i+1);
        printf("Enter serial no. (ranges between AA0-FF9): ");
        scanf("%s", allParts[i].serialNumber);
        printf("Enter year of manufacture : ");
        scanf("%d", &allParts[i].yearOfManufacture);
        printf("Enter material : ");
        scanf("%s", allParts[i].material);
        printf("Enter quantity : ");
        scanf("%d", &allParts[i].quantity);
    }
    
    for(int i = 0; i < totalParts; i++){
        if(strcmp("CC6", allParts[i].serialNumber) >= 0 && strcmp(allParts[i].serialNumber, "BB1") <= 0){
            printf("\nSerial no. : %s\nManufacture Year : %d\nMaterial : %s\nQuantity : %d\n", allParts[i].serialNumber, allParts[i].yearOfManufacture, allParts[i].material, allParts[i].quantity);
        }
    }
    
    
} //end main
