/* counts number of blanks, tabs, and newlines */

#include <stdio.h>

int main(void)
{
    int c, blanks, tabs, newlines;
    blanks = tabs = newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        } else if (c == '\t') {
            tabs++;
        } else if (c == '\n') {
            newlines++;
        }
    }
    printf("\n\n");
    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", blanks, tabs, newlines);
}
