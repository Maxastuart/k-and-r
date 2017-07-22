#include <stdio.h>

/* Write a Program to remove the trailing blanks and tabs from each input line
  and to delete entirely blank lines */

#define MAXLINE 1000

int getlines(char line[], int lim);
int remove_trail(char line[]);

main()
{
  int len;
  char line[MAXLINE];

  while ((len = getlines(line, MAXLINE)) > 0) {
    if (remove_trail(line) > 0) {
      printf("%s", line);
    }
  }

  return 0;
}

int getlines(char s[], int lim) // returns the length of a line, up to lim.
{
  int i, c;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

int remove_trail(char s[])
{
  int i;

  for (i = 0; s[i] != '\n'; ++i) {
    ;
  }

  --i;  // to consider raw line without \n

  for (i > 0; ((s[i] == ' ') || (s[i] == '\t')); --i) {
    ;   // removing the trailing blanks and tabs
  }

  if (i >= 0) {   // non-empty line
    ++i;
    s[i] = '\n';
    ++i;
    s[i] = '\0';
  }

  return i;
}
