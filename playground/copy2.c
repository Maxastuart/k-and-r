#include <stdio.h>

int main(void)
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

/* c = getchar() is an assignment, but it's also a value (the left hand side)
   holds the value, so we can use it in an expression as so.
   We still must declare int c before the while loop.
*/
