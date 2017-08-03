#include <stdio.h>

// Write a loop equivalent for the for loop below without
// using && or ||

// for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
//    s[i] = c;

int main(void)
{
   int lim = 1000;
   char s[1000];
   char c = getchar();

   for (int i = 0; i < lim-1; ++i)
   {
      if ((c = getchar()) != '\n')
      {
         if (c != EOF)
         {
            s[i] = c;
            ++i;
         }
      }
      
      printf("i = %d\n", i);
   }
}
