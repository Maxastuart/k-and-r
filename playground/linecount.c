#include <stdio.h>

int main(void)
{
    int line_count = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++line_count;
        }
    }

    printf("%d\n", line_count);
}
