#include <stdio.h>

// Exercise 1-8
// Write a program to count blanks, tabs, and newlines

main()
{
  int c;
  double blanks, tabs, newlines, other_chars;
  
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++newlines;
    } else if (c == '\t') {
      ++tabs;
    } else if (c == ' ') {
      ++blanks;
    } else {
      ++other_chars;
    }
  }

  printf("New Lines: %0.f\nTabs: %0.f\nBlanks: %0.f\nOther: %0.f\n",
        newlines, tabs, blanks, other_chars);
}
