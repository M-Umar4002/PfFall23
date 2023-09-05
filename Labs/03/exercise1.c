#include <stdio.h>

int main() {
	int height = 1, length = 2, width = 3;
	printf("\n== Volume Finding Program ==\n");
	printf("-- Taking Inputs --\n");
	printf("\nEnter container's height : ");
	scanf("%d", &height);
	printf("Enter container's length : ");
	scanf("%d", &length);
	printf("Enter container's width : ");
	scanf("%d", &width);
	int volume = height * length * width;
	printf("\nThe volume of the container is : %d\n", volume);
}
