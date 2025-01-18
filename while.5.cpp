#include <stdio.h>

int main() {
    int i = 100;
    while(i >= 4) {
        int j = 2;
        int isComposite = 0;
        while(j * j <= i) {
            if(i % j == 0) {
                isComposite = 1;
                break;
            }
            j++;
        }
        if(isComposite) {
            printf("%d\n", i);
        }
        i--;
    }
    return 0;
}
