/*
* Programmer: Muhammad Umar
* Date: 3/10/2023
* Description: Check the given number is perfect number or not
*/

#include <stdio.h>

void main(){

	int num, i, sum = 0;

	printf("\nEnter any positive whole number : "); //taking user's input
	scanf("%d", &num);

	//identiying all the divisors of number and adding them
	for(i = 1; i <= num/2; i++){
		if(num % i == 0){
			sum = sum + i;
		}
	} //end i loop

	//checking if the sum of all divisors of a number is equal to actual number or not and printing output
	if(num == sum){
		printf("\nIt is a perfect number.\n");
	} else {
		printf("\nIt is not a perfect number.\n");
	}
} //end main
