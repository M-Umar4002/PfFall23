#include <stdio.h>

void main() {
	int height, length, width;
	
	printf("\n== Volume Finding Program ==\n");
	printf("\n-- Taking Inputs --\n");
	
	printf("\nEnter container's height : ");
	scanf("%d", &height);
	
	printf("Enter container's length : ");
	scanf("%d", &length);
	
	printf("Enter container's width : ");
	scanf("%d", &width);
	
	printf("\nThe volume of the container is %d cubic units. \n", height * length * width);
}
