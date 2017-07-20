#include <stdio.h>

/* Rewrite the temp conversion program from 1.2 to use a
   function for converstion */

float fahr_to_cels(int fahr);

main()
{
  int fahr;
  int lower, upper, step;

  lower = 0; // lower limit of temperature table
  upper = 300; // upper limit
  step = 20; // step size

  fahr = lower;
  printf("\nFahrenheit-Celsius Table\n\n");
  while (fahr <= upper) {
    printf("%6d\t%6.1f\n", fahr, fahr_to_cels(fahr));
    fahr = fahr + step;
  }
  printf("\n");
}

float fahr_to_cels(int f)
{
  float cels;
  cels = ((5.0/9.0) * (f-32));
  return cels;
}
