/*
* Programmer: Muhammad Umar
* Date: 09/12/2023
* Description: Creates a matrix from the max values of a matrix's submatrix.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// dynamic allocation of the matrix
int** createMatrix(int n){
	int **mat = (int **) malloc(sizeof(int *) * n);
	int *block = (int *) malloc(sizeof(int) * n*n);

	for (int i = 0; i < n; i++) mat[i] = block + i*n;

	return mat;
} //end createMatrix

void readFileMatrix(FILE *fp, int **mat, int n){
	char buffer[100];

	for (int i = 0; !feof(fp) && i < n; i++) {
		fgets(buffer, 100, fp);
		buffer[strcspn(buffer, "\n")] = 0; // remove new line

		// read through space separated values in the file
		char *num = strtok(buffer, " ");
		for (int j = 0; num != NULL && j < n; j++) {
			mat[i][j] = atoi(num);

			num = strtok(NULL, " ");
		}
	}
} //end readFileMatrix

void printMatrix(int **mat, int n){
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%-3d ", mat[i][j]);
		}
		printf("\n\n");
	}
} //end printMatrix

int max(int** mat, int i, int j, int n){
	int maxVal = 1 << 31;

	// checking for the entire square matrix's positions
	for (int k = 0, check[] = {0,0, 1,0, 1,1, 0,1}; k < 8;)
		maxVal = (mat[i+check[k++]][j+check[k++]] > maxVal) ? mat[i+check[k-2]][j+check[k-1]] : maxVal;

	return maxVal;
} //end max

int** getSubmatrix(int **mat, int n) {	
	int **subMat = createMatrix(n/2);

	for (int i = 0; i < n; i += 2) {
		for (int j = 0; j < n; j += 2) {
			// assign max value to the sub matrix
			subMat[i/2][j/2] = max(mat, i, j, n);
		}
	}

	return subMat;
} //end getSubmatrix

int main(int argc, char const *argv[]){
	int n = atoi(argv[1]);

	while (!(n == 2 || n == 4 || n == 8)) {
		printf("Incorrect dimension\nEnter dimension again: ");
		scanf("%d", &n);
	}

	FILE *fp = fopen(argv[2], "r");

	int **mat = createMatrix(n);
	readFileMatrix(fp, mat, n);
	printMatrix(mat, n);

	int **subMat = getSubmatrix(mat, n);
	printf("\nSubmatrix with maximum values:\n");
	printMatrix(subMat, n/2);

	return 0;
} //end main
