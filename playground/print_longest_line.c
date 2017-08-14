/* prints the longest line from input */

#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len;    // current line length
    int max;    // max length seen so far
    char line[MAXLINE];     // current input line
    char longest[MAXLINE];  // longest line saved here

    max = 0;
    while ((len = getlines(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
       }
    }
    if (max > 0) {
        printf("%s", longest);
    }

    return 0;
}

/* getlines - fetches the next line of input, returns length */
int getlines(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';

    return i;
}

/* copy - copy 'from' into 'to' */
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }

    /* this could also be written like...

       while (to[i] != '\0') {
         to[i] = from[i];
         i++;
       }

    */
}
