/*
* Programmer: Muhammad Umar
* Date: 19/9/2023
* Description: Create a calculator asking for operator (+ or – or * or /) and 2 operands and perform calculation according to the user input.
*/

#include <stdio.h>

void main(){

	int num1, num2;

	printf("\nEnter two numbers in format (number1, number2) : "); //taking numbers from user
	scanf("%d, %d", &num1, &num2);

	char opr;

	printf("\nEnter any operator from (+, -, *, /) : "); //taking operator from user
	scanf(" %c", &opr);

	printf("\n");

	switch (opr) {

		case '+' :
			printf("Sum = %d", num1 + num2);
			break;

		case '-' :
			printf("Subtraction = %d", num1 - num2);
			break;

		case '*' :
			printf("Multiplication = %d", num1 * num2);
			break;

		case '/' :
			printf("Division = %d", num1 / num2);
			break;

		default :
			printf("Choose a correct option!");

	}

	printf("\n");

} //end main
