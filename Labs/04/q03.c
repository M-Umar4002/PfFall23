/*
* Programmer: Muhammad Umar
* Date: 12/9/2023
* Description: Print the sum of the squares of "n" integers
*/

# include <stdio.h>

void main(){

	int n; // to take user's input for deciding total amounts of input
	
	printf("\nEnter any positive whole number to give the amount of total integers : ");
	scanf("%d", &n);
	
	int i = 0, ans = 0; // initialize i for counter and ans for the answer
	
	printf("\n-- Taking Inputs --\n\n");
	
	while(i < n){
	    
	    int integer; // to take integers as input

	    printf("Enter any integer : ");
	    scanf("%d", &integer);
	    
	    ans = ans + (integer * integer);
	    
	    i++;
	}
	
	printf("\nAnswer: %d", ans);

} //end main
