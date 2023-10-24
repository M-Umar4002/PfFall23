/*
* Programmer: Muhammad Umar
* Date: 24/10/2023
* Description: Take two numbers and perform basic arithemetic operations by making a function.
*/

#include <stdio.h>

//to perform calculations by taking two numbers and an operator
int performOperations(int num1, int num2, char opr){

    int ans;

    //performing operation according to user's input
    switch (opr){
        case '+' :
            ans = num1+num2;
            break;
        case '-' :
            ans = num1-num2;
            break;
        case '*' :
            ans = num1*num2;
            break;
        case '/' :
            ans = num1/num2;
            break;
    }  
    printf("\nAnswer : %d\n", ans);
}

void main(){

    int num1, num2;
    char opr;

    printf("\nEnter first number : "); //to get first number from user
    scanf("%d", &num1);

    printf("Enter second number : "); //to get second number from user
    scanf("%d", &num2);

    printf("\nEnter any operator (from '+, -, *, /') to perform operation : "); //to get an operator from user
    scanf(" %c", &opr);

    performOperations(num1, num2, opr);
} //end main
