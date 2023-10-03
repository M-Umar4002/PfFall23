/*
* Programmer: Muhammad Umar
* Date: 3/10/2023
* Description: Take two integers "a" and "b" from user and iterate values of "a" till "b". If a<=9, output will be english representation i.e. 8 = EIGHT, 9=Nine etc. If the iteration exceeds 9 then print if the exceeded number is even or odd.
*/

#include <stdio.h>

void main(){

	int a, b, i;

	printf("Enter two positive whole numbers : ");
	scanf("%d %d", &a, &b);

	while(a<=b) {

		switch(a){
			case 0: 
				printf("ZERO ");
				break;
			case 1: 
				printf("One ");
				break;
			case 2: 
				printf("Two ");
				break;
			case 3: 
				printf("Three ");
				break;
			case 4: 
				printf("Four ");
				break;
			case 5: 
				printf("Five ");
				break;
			case 6: 
				printf("Six ");
				break;
			case 7: 
				printf("Seven ");
				break;
			case 8: 
				printf("Eight ");
				break;
			case 9: 
				printf("Nine ");
				break;
		}
		if(a > 9){
			if(a % 2 == 0){
				printf("Even ");
			} else {
				printf("Odd ");
			}
		}
		a++;

	}

	if(a > 9){
		if(i % 2 == 0){
			printf("Even ");
		} else {
			printf("Odd ");
		}
	}
} //end main
