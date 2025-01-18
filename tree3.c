#include <stdio.h>

int main() {
  int i, j, k;

  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= i - 1; j++) {
      printf("  ");
    }

    for (k = i; k <= 5; k++) {
      printf("%d ", k);
    }

    printf("\n");
  }

  return 0;
}
