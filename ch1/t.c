#include <stdio.h>

int main(void)
{
  int r, i, x;

  x = 0;
  r = 4;
  while (r-- != 0) {
    putchar('X');
  }
  while (r != 0) {
    putchar('X');
    r--;
  }
  printf("\n");

  // printf("r-- = %d\n", r--);

  return 0;
}
