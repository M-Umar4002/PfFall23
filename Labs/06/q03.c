/*
* Programmer: Muhammad Umar
* Date: 3/10/2023
* Description: Compute the LCM and GCD of two numbers.
*/

#include <stdio.h>

void main(){

	int num1, num2, num, greater, i;

	printf("\nEnter first and second number : "); //taking user's input
	scanf("%d %d", &num1, &num2);

	//checking which number is smaller from both
	if(num1 < num2){
		num = num1;
	} else {
		num = num2;
	}

	//identifying and printing LCM and GCD
	for(i = num; i > 0; i--){
		if(num1 % i == 0 && num2 % i == 0){
			printf("\nLCM : %d\n", num1 * num2 / i);
			printf("GCD : %d\n", i);
			break;
		}
	} //end i loop
} //end main
