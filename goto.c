#include <stdio.h>

int main() {
    int i = 1;

    loop:
    if (i <= 100) {
        if (i % 2 == 0) {
            printf("%d ",i);
        }
        i++;
        goto loop;
    }
 
    i = 1;  

    loop2:
    if (i <= 100) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
        goto loop2;
    }

    return 0;
}

