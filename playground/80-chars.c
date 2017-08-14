/* prints lines longer than 80 characters */

#include <stdio.h>
#define MAXLINE 500

int getlines(char s[], int lim);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    char line[MAXLINE];
    char printable_line[MAXLINE];

    while ((len = getlines(line, MAXLINE)) > 0) {
        if (len > 80) {
            copy(printable_line, line);
            printf("%s\nlength: %d\n", printable_line, len-1);
        }
    }

    return 0;
}

int getlines(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && ((c = getchar()) != EOF) && c != '\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
