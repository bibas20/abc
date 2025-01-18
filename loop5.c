#include <stdio.h>

int isComposite(int n) {
    int i;
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int i;
    for(i = 100; i >= 1; i--) {
        if(isComposite(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
