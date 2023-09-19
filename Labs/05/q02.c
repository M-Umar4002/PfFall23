/*
* Programmer: Muhammad Umar
* Date: 19/9/2023
* Description: Write a program to see greetings according to time using a 24-hour format.
*/

#include <stdio.h>

void main(){

	int time;

	printf("\nEnter any time in 24-hour format : "); //taking user's input
	scanf("%d", &time);

	printf("\n");

	if(time >= 5 && time <= 11){
		printf("Good Morning");
	} else if(time >= 12 && time <= 18){
		printf("Good Evening");
	} else if(time > 18 && time <= 24){
		printf("Good Night");
	} else if(time >= 1 && time <= 4){
		printf("So jaa Bhai!");
	} else {
		printf("Please enter correct time!");
	}

	printf("\n");

} //end main
