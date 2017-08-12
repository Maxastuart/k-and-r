#include <stdio.h>

#define IN  1
#define OUT 0

int main(void)
{
    int c, lines, words, chars, state;
    lines = words = chars = 0;

    state = OUT;

    while ((c = getchar()) != EOF) {
        chars++;
        if (c == '\n') {
            lines++;
        }
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            words++;
        }
    }

    printf("\ncharacters: %d\nwords: %d\nlines: %d\n", chars, words, lines);
}
