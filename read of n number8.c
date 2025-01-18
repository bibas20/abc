#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
        int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void printPrimes(int n) {
	int i
    for ( i = 2; i <= n; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d are: ", n);
    printPrimes(n);
    return 0;
}

