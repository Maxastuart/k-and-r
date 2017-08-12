/* prints its input one word per line */

#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
        if (c == ' ' || c == '\t') {
            putchar('\n');
        }
    }
}
