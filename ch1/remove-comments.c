#include <stdio.h>

/* Write a program to remove all comments from a C program. Don't forget
to handle quoted strings and character constants properly. C comments do
not nest. */

void remove_comment(int c);
void in_comment(void);
void echo_quote(int c);

int main(void)
{
  int c;
  printf("To check /* This is a comment */ \n");

  while ((c = getchar()) != EOF) {
    remove_comment(c);
  }

  return 0;
}

void remove_comment(int c)
{
  int d;
  if (c == '/') {
    if ((d = getchar()) == '*') {
      in_comment();
    } else if ( d == '/') {
      putchar(c);
      putchar(d);
    } else {
      putchar(c);
      putchar(d);
    }
  } else if (c == '\'' || c == '"') {
    echo_quote(c);
  } else {
    putchar(c);
  }
}

void in_comment()
{
  int c, d;

  c = getchar();
  d = getchar();

  while (c != '*' || d != '/') {
    c = d;
    d = getchar();
  }
}

void echo_quote(int c)
{
  int d;

  putchar(c);

  while ((d = getchar()) != c) {
    putchar(d);
    if (d == '\\') {
      putchar(getchar());
    }
  }
  putchar(d);
}
