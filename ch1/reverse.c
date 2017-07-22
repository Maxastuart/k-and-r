#include <stdio.h>

/*
Exercise 1-19:
Write a function, reverse(s), that reverses the character string s. Use it
to write a program that reverses its input a line at a time.
*/

#define MAXLINE 1000

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

void reverse(char s[])
{
  int i, j;
  char temp;

  for (i = 0; s[i] != '\0'; ++i) {
    ; // this loop tells us how many characters are in s[].
      // it just increments i until it hits the nul byte.
  }

  --i; // why do we subtract 1 from i?
       // to get to the newline '\n'

  if (s[i] == '\n') { // we check if s[i] is a newline char '\n'
    --i;              // if it is, we subtract 1
                      // so we don't inlude '\n' in our reversing
  }

  // if s[i] is not '\n' then the user didn't end his input with '\n'

  // by the time we get to the while loop, i will be a number representing
  // the number of characters in user's input.

  // let's say the user entered "hello world"
  // i = 10

  j = 0;
  while (j < i) {   // 1st loop (i = 10, j = 0):   2nd loop (i = 9, j = 1):
    temp = s[j];    // temp = 'h'                  temp = 'e'
    s[j] = s[i];    // 'h'  = 'd'                  'e'  = 'l'
    s[i] = temp;    // 'd'  = 'h'                  'l'  = 'e'
    --i;            //  i   =  9                    i   =  8
    ++j;            //  j   =  1                    j   =  2
  }

  // This loop keeps going until j == i
  // At the end all the characters in s[] will have been reassigned
  // and the char array will have been reversed
}

main()
{
  int len;
  char line[MAXLINE];

  while ((len = getlines(line, MAXLINE)) > 0) {
    reverse(line);
    printf("%s", line);
  }
  return 0;
}
