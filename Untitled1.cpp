#include <stdio.h>

long int power(int a, int n) {
    if (n == 0) {
        return 1;
    } else { 
        return a * power(a, n - 1);
    }
}

int main() {
    int a, n;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &n);

    long int result = power(a, n);
    printf("%d to the power of %d is: %ld\n", a, n, result);

    return 0;
}
