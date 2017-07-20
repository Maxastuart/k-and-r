#include <stdio.h>

// Exercise 1-9
// Write a program to copy its input to its output, replacing each string
// of one or more blanks by a single blank.

main()
{
  int c;
  int blank_count = 0;

  while ( (c = getchar()) != EOF ) {
    if (c != ' '){
      putchar(c);
      blank_count = 0;
    } else if (blank_count == 0 && c == ' ') {
      putchar(c);
      blank_count++;
    }
  }
}

/*
output:
$ ./blank-reducer
hello world
hello world
hello  world
hello world
hello     world
hello world
hello   world
hello	world
hello                                            world
hello world
*/
