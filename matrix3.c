#include <stdio.h>

int main() {
    int matrix[4][3];
    int i,j;
    
    printf("Enter elements of 4x3 matrix:\n");
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nThe 4x3 matrix is:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

