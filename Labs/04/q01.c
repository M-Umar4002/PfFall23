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

	int n;
	printf("Enter any positive whole number to print '*' n times:");
	scanf("%d", &n);

	int count = 1, j = 1;

	while(count <= n){

		j = 1;
		
		while(j <= count){
      
			printf("*");
			j = j + 1;
		
                }
		
		count = count + 1;
		printf("\n");
	}

}//end main
