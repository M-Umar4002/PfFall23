/*
* Programmer: Muhammad Umar
* Date: 12/9/2023
* Description: inaput any number "n" and print the pattern.
		if n = 3, output will be:
		***
		***
		***
*/

# include <stdio.h>

void main(){

	int n; // to take user's input
	
	printf("\nEnter any positive whole number to print n '*' n times : ");
	scanf("%d", &n);
	
	printf("\n");

	int count = 1; // counter for moving on new line

	while(count <= n){

		int i = n; // counter for printing "*"
		
		while(i > 0){
      
			printf("*");
			i = i - 1;
		
        }
		
		count = count + 1;
		printf("\n"); // changing the line
    }

} //end main
