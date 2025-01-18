#include <stdio.h>

#define MAX 10  

void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2) {
    if (col1 != row2) {
        printf("Matrix multiplication not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return;
    }
    
   int i;
    for ( i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;
 
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }


    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);
    if (col1 != row2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }


    multiplyMatrices(mat1, mat2, result, row1, col1, row2, col2);

    printf("\nThe result of matrix multiplication is:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

