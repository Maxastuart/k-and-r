#include <stdio.h>

// Exercise 1-14
// Write a program to print a histogram of the frequencies of different
// characters in its input.

// help from "soffes" on github.

#define LIMIT '~'-' ' // ASCII values start at 32 ' ' and end at 126 '~'

main()
{
  int char_count[LIMIT], i, c, x;

  // set all elements in char_count array to 0
  for (i = 0; i < LIMIT; i++) {
    char_count[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= ' ' && c <= '~') {
      ++char_count[c-' '];  
    }
  }

  for (i = 0; i < LIMIT; ++i) {
    printf("%2d ", i);
    for (x = 0; x < char_count[i]; ++x) {
      printf("|");
    }
    printf("\n");
  }
}
