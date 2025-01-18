#include <stdio.h>

int main() {

  int num1, num2, num3, num4, num5;

  printf("Enter 5 numbers: ");
  scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

  printf("1\n");
  printf("2 %d\n", num2);
  printf("3 %d %d\n", num3, num3);
  printf("4 %d %d %d\n", num4, num4, num4);
  printf("5 %d %d %d %d %d\n", num5, num5, num5, num5, num5);

  return 0;
}

