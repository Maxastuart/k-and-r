#include <stdio.h>

// Exercise 1-12
// Write a program that prints its input one word per line.

#define IN 1
#define OUT 0

main()
{
  int c, state;
  state = OUT;

  while ((c = getchar()) != EOF) {

    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
      putchar('\n');
    } else {
      state = IN;
    }

    while (state == IN) {
      putchar(c);
      state = OUT;
    }

  }
}

/*
output:
$ ./one-liner
hello world
hello
world


this is a test
this
is
a
test
*/
