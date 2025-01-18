#include <stdio.h>

int main() {
    int i = 1;
    while(i <= 100) {
        int reversed = 0;
        int original = i;
        while(i != 0) {
            int digit = i % 10;
            reversed = reversed * 10 + digit;
            i /= 10;
        }
        if(original == reversed) {
            printf("%d\n", original);
        }
        i = original + 1;
    }
    return 0;
}
