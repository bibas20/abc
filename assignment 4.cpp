c
Edit
Copy code
#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a < b && a < c && a < d && a < e) {
        printf("The smallest number is: %d\n", a);
    } else if (b < a && b < c && b < d && b < e) {
        printf("The smallest number is: %d\n", b);
    } else if (c < a && c < b && c < d && c < e) {
        printf("The smallest number is: %d\n", c);
    } else if (d < a && d < b && d < c && d < e) {
        printf("The smallest number is: %d\n", d);
    } else {
        printf("The smallest number is: %d\n", e);
    }

    return 0;
}
