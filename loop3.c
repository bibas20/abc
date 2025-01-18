#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i;
    for(i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i;
    for(i = 2; i <= 100; i++) {
        if(isPrime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
