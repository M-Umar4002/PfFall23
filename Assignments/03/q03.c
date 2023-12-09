/*
* Programmer: Muhammad Umar
* Date: 09/12/2023
* Description: Takes entries for different files and then combines them together in a seprate file according tot he IDs.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* getRecord(char *id, FILE *fp){
	if (fp == NULL) return NULL;

	char buffer[30], delim[2] = ",";
	char *record = (char *)malloc(sizeof(char) * 30);

	while (!feof(fp)) {
		fgets(buffer, 30, fp);
		buffer[strcspn(buffer, "\n")] = 0;

		char *record_id = strtok(buffer, delim);

		if (!strcmp(id, record_id)) {
			strcpy(record, strtok(NULL, delim));
			return record;
		}
	}

	return NULL;
} //end getRecord

bool checkRecord(char *id, FILE *fp){
	if (fp == NULL) return false;

	char buffer[30], delim[2] = ",";

	while (!feof(fp)) {
		fgets(buffer, 30, fp);
		buffer[strcspn(buffer, "\n")] = 0;

		char *record_id = strtok(buffer, delim);
		if (!strcmp(record_id, id)) return true;
	}

	return false;
} //end checkRecord

int main(){
	char id[30], merge[30 * 2];

	printf("\nEnter ID to merge: ");
	fgets(id, 30, stdin);
	id[strcspn(id, "\n")] = 0;

	FILE *personal = fopen("Personal.txt", "r"), *department = fopen("Department.txt", "r"), *combine = fopen("Combine.txt", "r");
	char *name = getRecord(id, personal), *salary = getRecord(id, department);

	if (name == NULL || salary == NULL) {
		printf("Record missing in either both or one file!");
		return 0;
	}

	fclose(department), fclose(personal);
	
	if (!checkRecord(id, combine)) {
		fclose(combine);
		combine = fopen("Combine.txt", "a");

		sprintf(merge, "%s,%s,%s\n", id, name, salary);
		fputs(merge, combine);

		printf("Record merged successfully!\n\n");
	} else {
		printf("Record already exists!\n\n");
	}

	fclose(combine);

	return 0;
} //end main
