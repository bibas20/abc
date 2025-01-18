


#include <stdio.h>

int isPalindrome(int n) {
    int reversed = 0;
    int original = n;
    while(n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int i;
    for(i = 1; i <= 100; i++) {
        if(isPalindrome(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
