/*
* Programmer: Muhammad Umar
* Date: 31/10/2023
* Description: Swapping the values of two variables by making a funtion and using pointer variables inside it.
*/

#include <stdio.h>

//to swap the values of j and k by taking their addresses
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void main(){
    int j = 2, k = 5;
    printf("j = %d, k = %d\n", j, k);

    //to pass the memory addresses of ariables j and in function swap
    swap(&j, &k);

    printf("j = %d, k = %d", j, k);
} //end main

//the values of j and k were not swapped by the given code because in that code we were passing only the values of variables and in the function we were changing and swapping the values of other two variables that were a and b. So that function was not making any change on the actual variables
