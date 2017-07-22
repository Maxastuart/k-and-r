#include <stdio.h>

/* Write a program to "fold" long input lines into two or more shorter lines
   after the last non-blank character that occurs before the n-th column of
   input. Make sure your program does something intelligent with very long
   lines, and if there are no blanks or tabs before the specified column. */

#define MAXLINE 1000
#define FOLD    70  // max length of a line

int getlines(char line[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';
  return i;
}

int main(void)
{
  int t, len;
  int location, spaceholder;
  char line[MAXLINE];

  while ((len = getlines(line, MAXLINE)) > 0) {
    if (len >= FOLD) {
      t = 0;
      location = 0;
      while (t < len) {
        if (line[t] == ' ') {
          spaceholder = t;
        }
        if (location == FOLD) {
          line[spaceholder] = '\n';
          location = 0;
        }
        location++;
        t++;
      }
    }
    printf("%s", line);
  }
  return 0;
}
