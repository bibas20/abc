#include <stdio.h>

int main() {

  int numbers[5][5] = {
    {1, 0, 0, 0, 0},
    {2, 2, 0, 0, 0},
    {3, 3, 3, 0, 0},
    {4, 4, 4, 4, 0},
    {5, 5, 5, 5, 5}
  };

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }

  return 0;
}
