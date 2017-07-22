#include <stdio.h>

int brace, bracket, parenth;
void in_comment();
void in_quote(int c);
void search(int c);

int main(void)
{
  int c;
  extern int brace, bracket, parenth;

  while ((c = getchar()) != EOF) {
    if (c == '/') {
      if ((c = getchar()) == '*') {
        in_comment();
      } else {
        search(c);
      }
    } else if (c == '\'' || c == '"') {
      in_quote(c);
    } else {
      search(c);
    }
  }

  if (brace < 0) {
    printf("Unmatched braces.\n");
    brace = 0;
  } else if (bracket < 0) {
    printf("Unmatched bracket.\n");
    bracket = 0;
  } else if (parenth < 0) {
    printf("Unmatched parenthesis.\n");
    parenth = 0;
  }

  if (brace > 0) {
    printf("Unmatched braces.\n");
  } else if (bracket > 0) {
    printf("Unmatched bracket.\n");
  } else if (parenth > 0) {
    printf("Unmatched parenthesis.\n");
  }

  return 0;
}

void in_comment()
{
  int c, d;
  c = getchar();
  d = getchar();
  while ( c != '*' || d != '/' ) {
    c = d;
    d = getchar();
  }
}

void in_quote(int c)
{
  int d;
  putchar(c);
  while ((d = getchar()) != c) {
    if (d == '\\') {
      getchar();
    }
  }
}

void search(int c)
{
  extern int brace, bracket, parenth;

  if (c == '{') {
    --brace;
  } else if (c == '}') {
    ++brace;
  } else if (c == '(') {
    --parenth;
  } else if (c == ')') {
    ++parenth;
  } else if (c == '[') {
    --bracket;
  } else if (c == ']') {
    ++bracket;
  }
}
