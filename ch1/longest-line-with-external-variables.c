#include <stdio.h>

/* Let us rewrite the longest-line program with line, longest, and max
as external variables. */

#define MAXLINE 1000    // maximum input line size

int max;                // maximum length seen so far
char line[MAXLINE];     // current input line
char longest[MAXLINE];  // longest line saved here

int getlines(void);
void copy(void);

/* print longest input line; specialized version */
main()
{
  int len;
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = getlines()) > 0) {
    if (len > max) {
      max = len;
      copy();
    }
  }

  if (max > 0) { /* there was a line */
    printf("%s", longest);
  }

  return 0;
}

/* getlines: specialized version */
int getlines(void)
{
  int c, i;
  extern char line[];

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';
  return i;
}

/* copy: specialized version */
void copy(void)
{
  int i;
  extern char line[], longest[];

  i = 0;
  while ((longest[i] = line[i]) != '\0') {
    ++i;
  }

  // can also be written like this
  // while (line[i] != '\0') {
  //   longest[i] = line[i];
  //   ++i;
  // }
}
