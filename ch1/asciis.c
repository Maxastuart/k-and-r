#include <stdio.h>

main()
{
  printf("\nASCII Values:\n\n");

  int x;
  for (x = 32; x < 127; ++x) {
    printf("%d = %c\n", x, x);
  }

}
