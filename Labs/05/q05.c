/*
* Programmer: Muhammad Umar
* Date: 19/9/2023
* Description: Write a program to input a character from the user and check whether the given character is a small alphabet, capital alphabet, digit or special character.
*/

#include <stdio.h>

void main() {
    
    char chr;
    
    printf("\nEnter any character: "); //taking user's input
    scanf(" %c", &chr);
    
    printf("\n");
    
    // identifying the character
    if (chr >= 48 && chr <= 57) {
        printf ("It is a digit!");
    } else if (chr >= 65 && chr <= 90) {
        printf ("It is a capial alphabet!");
    } else if (chr >= 97 && chr <= 122) {
        printf ("It is a small alphabet!");
    } else {
        printf("It is a special character!");
    }
    
    printf ("\n");

} //end main
