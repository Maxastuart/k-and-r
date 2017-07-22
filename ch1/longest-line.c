#include <stdio.h>

#define MAXLINE 1000  // maximum input line size

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
main()
{
  int len;               // current line length
  int max;               // maximum length seen so far
  char line[MAXLINE];    // current input line
  char longest[MAXLINE]; // longest line saved here

  max = 0;
  while ((len = getlines(line, MAXLINE)) > 0) {
        // len stores the getlines() return
    if (len > max) {
      max = len;
      copy(longest, line); // fills up "longest" with the chars of "line"
    }
  }

  if (max > 0) {    // there was a line
    printf("%s", longest); // longest exists, thanks to the copy() function
  }

  return 0;
}

// getlines: reads a line into s, return length
int getlines(char s[], int lim) // lim refers to MAXLINE    s[] refers to current line
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
                  // lim - 1 because the last element in a char array should be '\0'
                  // c != '\n' because we are measuring the length of the line
    s[i] = c;
    // c is assigned to the current line at index i
  }

  // the \n DOES get counted as part of the line length
  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0'; // add the nul char at the end of the line
  return i; // the line is i characters long (including \n and \0)
}

// copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
/* to[] refers to longest, from[] refers to line
   so we are copying FROM current line TO max line
*/
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0') {
    // we are assigning the values of from[] to to[]
    // incrementer doesn't get executed when we hit the nul byte
    ++i;
  }

  // can also be written like this
  // while (line[i] != '\0') {
  //   longest[i] = line[i];
  //   ++i;
  // }
}
