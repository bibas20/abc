#include <stdio.h>

int main() {
    int i = 2;
    while(i <= 100) {
        int j = 2;
        int isPrime = 1;
        while(j * j <= i) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }
        if(isPrime) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
