#include <stdio.h>

typedef struct Employee {
	char name[20], role[10];
	int communication, teamwork, creativity;
} Employee;

typef struct Department {
	char departName[20];
	Employee employees[5];
} Department;

int main() {
	
	char names[20][30] = {
							"Ethan Turner", "Olivia Bennett", "Xavier Rodriguez", "Sophia Foster", "Mason Harris", "Ava Nelson", "Caleb Ramirez", "Zoe Mitchell", "Aiden Parker", "Lily Anderson", 
							"Logan Martin", "Mia Coleman", "Jackson Bennett", 
						}
	return 0;
}
