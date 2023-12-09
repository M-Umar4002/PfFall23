/*
* Programmer: Muhammad Umar
* Date: 09/12/2023
* Description: Creates a 2D array for multiple departments. Assigns each department with employees with random names, roles and stats. Finds the best department according to stats.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct Employee {
	char name[30], role[10];
	int communication, teamwork, creativity;
} Employee;

typedef struct Department {
	char departName[20];
	Employee employees[5];
} Department;

char* getRandomName(char* names[]){
	int randIndex;
	
	do {
		randIndex = rand() % 20;
	} while(names[randIndex] == NULL);

	char* tempName;
	strcpy(tempName, names[randIndex]);

	names[randIndex] = NULL;
	
	return tempName;
} //end getRandomNames

int main() {

	srand(time(NULL));
	
	char* names[20] = {
		"Ethan Turner", "Olivia Bennett", "Xavier Rodriguez", "Sophia Foster", "Mason Harris", "Ava Nelson", "Caleb Ramirez", 
		"Zoe Mitchell", "Aiden Parker", "Lily Anderson", "Logan Martin", "Mia Coleman", "Jackson Bennett", "Chloe Foster", 
		"Noah Sullivan", "Grace Thompson", "Owen Taylor", "Emma Rodriguez", "Wyatt Miller", "Isabella Hayes"
	};

	char role[5][10] = {"Director", "Executive", "Manager", "Employee", "Trainee"};

	Department allDepartments[4];
	strcpy(allDepartments[0].departName, "HR");
	strcpy(allDepartments[1].departName, "Finance");
	strcpy(allDepartments[2].departName, "Marketing");
	strcpy(allDepartments[3].departName, "Logistics");

	int maxStats = 0, bestDep = 0;

	printf("\n");
	for(int i = 0; i < 4; i++){

		printf("%20cEmployees of department : %s\n", ' ', allDepartments[i].departName);
		printf("      Name       |    Roll    |  Communication  |  Teamwork  |  Creativity  |");

		int totalStats = 0;

		for(int j = 0; j < 5; j++){

			strcpy(allDepartments[i].employees[j].name, getRandomName(names));
			strcpy(allDepartments[i].employees[j].role, role[j]);
			allDepartments[i].employees[j].communication = rand() % 100 + 1;
			allDepartments[i].employees[j].teamwork = rand() % 100 + 1;
			allDepartments[i].employees[j].creativity = rand() % 100 + 1;

			totalStats += allDepartments[i].employees[j].communication + allDepartments[i].employees[j].teamwork + allDepartments[i].employees[j].creativity;

			printf("\n%-17s|  %-10s|%9d%8c|%7d%5c|%8d%6c|", allDepartments[i].employees[j].name, allDepartments[i].employees[j].role, allDepartments[i].employees[j].communication, ' ', allDepartments[i].employees[j].teamwork, ' ', allDepartments[i].employees[j].creativity, ' ');
		}
		printf("\nSum for department '%s' : %d\n\n\n", allDepartments[i].departName, totalStats);

		if(totalStats > maxStats){
			maxStats = totalStats, bestDep = i;
		}
	}

	printf("%20cBest department award goes to : %s\n", ' ', allDepartments[bestDep].departName);
	printf("      Name       |    Roll    |  Communication  |  Teamwork  |  Creativity  |");
	for(int j = 0; j < 5; j++){

		printf("\n%-17s|  %-10s|%9d%8c|%7d%5c|%8d%6c|", allDepartments[bestDep].employees[j].name, allDepartments[bestDep].employees[j].role, allDepartments[bestDep].employees[j].communication, ' ', allDepartments[bestDep].employees[j].teamwork, ' ', allDepartments[bestDep].employees[j].creativity, ' ');
	}

	printf("\n\n");

	return 0;
} //end main
