#include <stdio.h>

/* Write a program, detab, that replaces tabs in the input with the proper
   number of blanks to space to the next tab stop. Assume a fixed set of
   tab stops, say every n columns. Should n be a variable or a symbolic
   parameter? */

#define TAB 10

int main(void)
{
  int c, spaces, remaining_spaces;
  spaces = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      putchar(c);
      spaces = 0; // reset # of spaces
    } else if (c == '\t') {
      remaining_spaces = TAB - (spaces % TAB);
      while (remaining_spaces != 0) {
        remaining_spaces--;
        putchar(' '); // will the space with ' ' blanks
      }
    } else { // if c is not a tab or new line...
      putchar(c);
      spaces++; // number of spaces increases, getting closer to tab line
    }
  }

  return 0;
}
