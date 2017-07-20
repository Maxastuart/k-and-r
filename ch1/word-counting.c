#include <stdio.h>

// count lines, words, and characters in input

#define IN 1
#define OUT 0

main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d new line, %d words, and %d characters\n", nl, nw, nc);
}

// Exercise 1-11
// How would you test this program? What kinds of input are most likely
// to uncover bugs if there are any?

/*
$ ./word-counting
what about hyphenated-words?
1 new line, 3 words, and 29 characters

You could test the capacity of the int variables. Maybe we need a double or
long for very big inputs
*/
