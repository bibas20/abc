#include <stdio.h>

int main() {
	int i;
	
    for (i =100; i >= 0; i--) {
        if (i % 2 == 0) {  
            continue;
        }
        if (i % 9 == 0) { 
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

