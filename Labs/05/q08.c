/*
* Programmer: Muhammad Umar
* Date: 19/9/2023
* Description: Take intensity of light value as input and print response according to it.
*/

#include <stdio.h>

void main() {
    
    int lightIntensity;
    
    printf("Enter intensity of light in integers (ranges from 0-1000) : "); //taking input
    scanf("%d", &lightIntensity);
    
    //checking brightness with different values of intensity of light
    if(lightIntensity >= 0 && lightIntensity <= 100) {
        printf("\nLow Brightness");
    } else if(lightIntensity >= 101 && lightIntensity <= 500) {
        printf("\nModerate Brightness");
    } else if(lightIntensity >= 501 && lightIntensity <= 1000) {
        printf("\nMaximum Brightness");
    }
    
} //end main
