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

	int n;
	printf("\nEnter any positive whole number to print n '*' n times:");
	scanf("%d", &n);

	int count = 1;

	while(count <= n){

		int i = n;
		
		while(i > 0){
      
			printf("*");
			i = i - 1;
		
    }
		
		count = count + 1;
		printf("\n");
  }

}//end main
