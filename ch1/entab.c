#include <stdio.h>

/* Write a program, entab, that replaces strings of blanks by the minimum
   number of tabs and blanks to achieve the same spacing. Use the same tab
   stops as for detab. When either a tab or a blank would suffice to reach
   a tab stop, which should be given preference? */

#define TAB 10

int main(void)
{
  int c = 0;
  int i = 0;
  int spaceCount = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++spaceCount;
      if (spaceCount == TAB) {
        spaceCount = 0;
        putchar('\t');
      }
    } else {
      for (i = 0; i < spaceCount; ++i) {
        putchar(' ');
      }
      spaceCount = 0;
      putchar(c);
    }
  }

  return 0;
}
