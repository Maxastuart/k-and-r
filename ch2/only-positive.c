/* only-positive: modifies an array of ints by squaring the positive ones */

#include <stdio.h>

int main(void)
{
   int a[10] = {-62, 1, -10, 60, 23, -42, 35, 99, -1034, 9};
   
   for (int i = 0; i < 10; i++) {

      if (a[i] < 0) {
         continue;
      }

      a[i] *= a[i];
   }

   for (int i = 0; i < 10; i++) {
      printf("%d ", a[i]);
   }

   printf("\n");
}
