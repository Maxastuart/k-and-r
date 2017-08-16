#include <stdio.h>
#define MAX 500

int getlines(char s[], int lim);

int main(void)
{
    char string[MAX];
    int i, len;
    len = getlines(string, MAX);
    i = 0;
    while (len > 0) {
        
    }
}

int getlines(char s[], int lim)
{
    int i, c;

    for (i = 0; i < lim-1 && (c = getchar() != '\0') && c != '\n') {
                s[i] = c;
            }
    if (c == '\n') {
        s[i] == '\n';
    }
    s[i] = '\0';
    return i;
}

char reverse[](char s[])
{

}
