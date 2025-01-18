#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    int century = year / 100;

    switch (century) {
        case 1:
            printf("%d is in the first century.\n", year);
            break;
        case 2:
            printf("%d is in the second century.\n", year);
            break;
        case 3:
            printf("%d is in the third century.\n", year);
            break;
        case 4:
            printf("%d is in the fourth century.\n", year);
            break;
        case 5:
            printf("%d is in the fifth century.\n", year);
            break;
        default:
            printf("%d is in an unknown century.\n", year);
            break;
    }

    return 0;
}
