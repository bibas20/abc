#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumOfDigits(num);
    printf("Sum of individual digits: %d\n", sum);

    return 0;
}
