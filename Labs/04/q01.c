/*
* Programmer: Muhammad Umar
* Date: 12/9/2023
* Description: inaput any number "n" and print the pattern.
		if n = 3, output will be:
		*
		**
		***
*/

# include <stdio.h>

void main(){

	int n; //to get user's input
	
	printf("Enter any positive whole number(n) to print '*' n times : ");
	scanf("%d", &n);
	
	printf("\n");

	int count = 1; //counter for moving on nex line

	while(count <= n){

		int j = 1; //counter for adding "*"
		
		while(j <= count){
      
			printf("*");
			j = j + 1;
		
                }
		
		count = count + 1;
		printf("\n"); //to move on new line
		
	}

} //end main
