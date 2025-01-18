#include <stdio.h>

int main() {
    int matrix1[3][4], matrix2[3][4], difference[3][4];
    int i,j=0;
    
    printf("Enter elements of the first 3x4 matrix:\n");
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter elements of the second 3x4 matrix:\n");
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    
    printf("\nDifference of the two 3x4 matrices is:\n");
    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

