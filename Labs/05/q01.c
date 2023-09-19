/*
* Programmer: Muhammad Umar
* Date: 19/9/2023
* Description: Write a C program to check whether a number is multiple of 3 or not
*/

#include <stdio.h>

void main(){

	int num;
	
	printf("\nEnter any number : "); //taking user's input 
	scanf("%d", &num);

	printf("\n");

	if(num % 3 == 0){
		printf("This number is multiple of 3");
	} else{
		printf("This number is not multiple of 3");
	}

	printf("\n");

} //end main
