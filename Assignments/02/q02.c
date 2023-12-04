/*
* Programmer: Muhammad Umar
* Date: 25/10/23
* Description: Find largest submatrix of 1s
*/

#include <stdio.h>

void showMatrix(int mat[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) printf("%-*d", n, mat[i][j]);
        printf("\n");
    }
} //end showMatrix

void inputMatrix(int mat[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
} //end inputMatrix

int sumSubMatrix(int mat[][100], int i, int j, int sq){
    int sum = 0;
    for (int n = i;n < sq + i; n++) for (int m = j;m < sq + j; m++) sum += mat[n][m];

    return sum;
} // end sumSubMatrix

int findLargestSquare(int mat[][100], int n, int m){   
    int sq = (n > m) ? m : n;

    // keep iterating until less than 2
    while (sq >= 2) {

        // for each sq x sq matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // check if sum of all the elements in the subarray is equal to the square of sq
                if (sq + i <= n && sq + j <= m && sumSubMatrix(mat, i, j, sq) == sq*sq) return sq;
            }
        }

        // reducing size of submatrix
        sq--;
    }

    return 0;
} // end findLargestSquare
 
int main() {
    int n, m, arr[100][100] = {0};

    // do not accept matrices smaller than 2x2
    do {
        printf("Enter dimensions of matrix (NxM): ");
        scanf("%dx%d", &n, &m);
    } while (n < 2 || m < 2);
    
    inputMatrix(arr, n, m);
    printf("Your matrix:\n");
    showMatrix(arr, n, m);
    printf("\n");

    int sq = findLargestSquare(arr, n, m);

    // check if subarray found
    (!sq) ? printf("No square matrix of size >= 2x2 found") : printf("Largest square matrix of size %dx%d found", sq, sq);

    return 0;
} // end main()
