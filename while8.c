#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    int reverse = 0;

    while (num <= 100) {
        if (num % 11 == 0) {
            sum += num;
        }
        num++;
    }

    printf("Sum of numbers divisible by 11 from 0 to 100: %d\n", sum);


    int temp = sum;
    while (temp > 0) {
        reverse = reverse * 10 + (temp % 10);
        temp /= 10;
    }

    printf("Reversed sum: %d\n", reverse);
    return 0;
}

