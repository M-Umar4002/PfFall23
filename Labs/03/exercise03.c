#include <stdio.h>
#include <math.h>

void main () {
	float base, perpendicular;
	
	printf("\n== Hypotenuse Finding Program ==\n");
	printf("\n-- Taking Inputs --\n");
	
	printf("\nEnter Triangle's base : ");
	scanf("%f", &base);
	
	printf("Enter Triangle's perpendicular : ");
	scanf("%f", &perpendicular);
	
	float hypotenuse = sqrt((perpendicular * perpendicular) + (base * base));
	printf("\nThe hypotenuse of the triangle is %f units.\n", hypotenuse);
}
