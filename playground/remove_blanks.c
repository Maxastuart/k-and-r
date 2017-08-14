/* removes trailing blanks and tabs from each line of input
   and deletes entirely blank lines */

#include <stdio.h>

#define MAXLINE 500

int getlines(char s[], int lim);
void copy(char to[], char from[]);

int main(void)
{
    char line[MAXLINE];
    char clean_line[MAXLINE];   // line with no trailing blanks
    int len, i, nonspace;

    while ((len = getlines(line, MAXLINE)) > 0) {
        for (i = len; i >= 0; i--) {
            printf("line[%d] = %c\n", i, line[i]);

            if (line[i] != '\t' || line[i] != ' ') {
                nonspace = 0; 
            } else {
                nonspace = 1;
            }
        }

        if (nonspace = 0) {
            printf("%s", line);
        }
    }

    return 0;
}

int getlines(char s[], int lim)     // modified to not include the \n
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
    int i;
    i = 0;

    while ((to[i] = from[i]) != '\n') {
        i++;
    }
}
