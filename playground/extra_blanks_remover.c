/* copies input to output, replaces each string of one or more blanks
   by a single blank */

#include <stdio.h>

int main(void)
{
    int c;
    int blanks = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        } else {
            blanks = 0;
        }
        if (blanks <= 1) {
            putchar(c);
        }
    }
}
