#include <stdio.h>

int checkExistence(int arr[], int size, int x) {
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] == x) {
            return 1; 
        }
    }

    return 0;  
    
}

int main() {
    int arr[20];
    int i;
    int x;

    printf("Enter 20 numbers:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a value to search for: ");
    scanf("%d", &x);

    int result = checkExistence(arr, 20, x);

    if (result) {
        printf("%d exists in the array.\n", x);
    } else {  
        printf("%d does not exist in the array.\n", x);
    }

    return 0;
}
