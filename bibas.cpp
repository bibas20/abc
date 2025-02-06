#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, smallest;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    smallest = (num1 < num2) ? num1 : num2;
    smallest = (smallest < num3) ? smallest : num3;
    smallest = (smallest < num4) ? smallest : num4;
    smallest = (smallest < num5) ? smallest : num5;

    printf("The smallest number is: %d\n", smallest);
    return 0;
}
