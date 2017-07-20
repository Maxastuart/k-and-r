#include <stdio.h>

// prints fahr to cels table using

// using constant variables outside of main
#define LOWER 0
#define UPPER 300
#define STEP  20

main()
{
  int fahr;
  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%3d\t%2.1f\n", fahr, (5.0/9) * (fahr-32));
  }
}
