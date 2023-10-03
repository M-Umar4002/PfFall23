/*
* Programmer: Muhammad Umar
* Date: 3/10/2023
* Description: Generate Fibonacci series upto 10000 and find the sum of only those numbers from it that are divisible by 3, 5 or 7 only
*/

#include <stdio.h>

void main(){

	int tempNum = 1, prevNum = 1, nextNum = 0, i, sum = 0;

	printf("\n1\n1\n");

	//generating fibonacci sries upto 10000 and calculating the sum of those numbers from it that are divisible by 3, 5 or 7 only
	for(i = 1; nextNum < 10000; i++){

		if(nextNum != 0){
			printf("%d\n", nextNum);
		}

		nextNum = tempNum + prevNum;

		//calculating the sum of those numbers that are divisible by 3, 5 or 7 only
		if(nextNum % 3 == 0 || nextNum % 5 == 0 || nextNum % 7 == 0){
			sum += nextNum;
		}

		prevNum = tempNum;
		tempNum = nextNum;
	} //end i loop

	printf("\nSum of the numbers divisible by 3, 5 or 7 only : %d\n", sum);
} //end main
