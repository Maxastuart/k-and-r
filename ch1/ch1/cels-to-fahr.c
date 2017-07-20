#include <stdio.h>

// Celsius-to-Fahrenheit conversion table from 0, 20, ..., 300

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("\nCelsius-to-Fahrenheit Table\n\n");
  while (upper >= celsius) {
    fahr = ((9.0/5.0) * celsius) + 32;
    printf("%6d\t%6d\n", celsius, fahr);
    celsius = celsius + step;
  }
  printf("\n");
}
