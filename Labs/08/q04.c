/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Take password of at least 8 characters from user. Compare it with the passord "Secure123" and printing the output according to it.
*/

#include <stdio.h>
#include <string.h>

void main(){

    char password[10000], strPass[10] = "Secure123";

    printf("\n");

    //taking password of at least 8 characters from user
    do{
        printf("Enter your password : ");
        gets(password);
    } while(strlen(password) < 8);

    int comp = strcmp(password, strPass);

    //comparing the given password with "Secure123" and printing the oytput according to it
    if(comp == 0){
        printf("\nLogin successful. Welcome!\n");
    } else{
        printf("\nLogin failed. Incorrect password\n");
    }
} //end main
