/*
* Programmer: Muhammad Umar
* Date: 11/10/2023
* Description: Create a universal array and a function that takes a void* as an argument along with size and some way of know what kind of data is stored. Then prints the values stored in the memory location pointed to by the void pointer. Use appropriate casting.
*/

#include <stdio.h>

//to print any array by taking the array, its size and datatype
void printAnyArray(void *arr, int size, char type){
	
	int i;

	//to print the array of different datatypes
    switch(type){
    	case 'i' :
    		for(i = 0; i < size; i++){
    			printf("%d ", *((int*) arr + i));
			}
			printf("\n");
			break;
			
		case 'c' :
    		for(i = 0; i < size; i++){
    			printf("%c ", *((char*) arr + i));
			}
			printf("\n");
			break;
		
		case 'f' :
    		for(i = 0; i < size; i++){
    			printf("%f ", *((float*) arr + i));
			}
			printf("\n");
			break;
		
		case 'd' :
    		for(i = 0; i < size; i++){
    			printf("%f ", *((double*) arr + i));
			}
			printf("\n");
			break;
		
		case 'l' :
    		for(i = 0; i < size; i++){
    			printf("%d ", *((unsigned long*) arr + i));
			}
			printf("\n");
			break;
			
	}
}

void main(){
	
	int intArray[10] = {0};
	char charArray[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	float floatArray[10] = {0};
	double doubleArray[10] = {0};
	unsigned long ulArray[10] = {0};

	//calling function for different cases
	printAnyArray(intArray, 10, 'i');
	printAnyArray(charArray, 10, 'c');
	printAnyArray(floatArray, 10, 'f');
	printAnyArray(doubleArray, 10, 'd');
	printAnyArray(ulArray, 10, 'l');
	
} //end main
