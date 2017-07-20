#include <stdio.h>

// Exercise 1-13
// Write a program to print a histogram of the lengths of words in it's input.
// It is easy to draw the histogram with the bars horizontal; a vertical
// orientation is more challenging.

// the histogram of word lengths for {"cat", "apple", "bee"}
// would be {0, 0, 2, 0, 1}

// help from "soffes" on github.

#define MAX 20 // max length word. doesn't count words longer than this.
#define IN  1
#define OUT 0

main()
{
  int current_word = 0;
  int c, i, x, state;
  int word_lengths[MAX];

  // set all elements in word_lengths array to 0
  for (i = 0; i < MAX; ++i) {
    word_lengths[i] = 0;
  }

  state = OUT;
  while ((c = getchar()) != EOF) {

    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      if (current_word > 0) {
        ++word_lengths[current_word];
      }
      current_word = 0;
    } else if (state == OUT) {
      state = IN;
    }

    if (state == IN) {
      ++current_word;
    }
  }

  for (i = 0; i < MAX; ++i) {
    printf("%d ", i);
    for (x = 0; x < word_lengths[i]; ++x) {
      printf("|");
    }
    printf("\n");
  }
}
