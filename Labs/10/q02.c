#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num){
	
	int i;
	
	for(i = 2; i <= sqrt(num); i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

void printPrime(int **arr, int rows, int cols){
	
	int i;
	int j, k, num = 2;
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			if(isPrime(num)){
				*(*(arr + i) + j) = num;
			}
			num++;
		}
	}
	
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			printf("%d", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

void main(){
	
	int rows, cols, i;
	
	printf("Rows : ");
	scanf("%d", &rows);
	
	printf("Columns : ");
	scanf("%d", &cols);
	
	int **arr = (int**) calloc(rows, sizeof(int*));
	
	for(i = 0; i < cols; i++){
		*(arr + i) = (int*) calloc(cols, sizeof(int));
	}
	
	printPrime(arr, rows, cols);
}
