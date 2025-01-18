#include <stdio.h>

int main() {
    int matrix[3][3];
    int i,j;
    

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

