#include <stdio.h>

int main(void)
{
    long count = 0;

    while (getchar() != EOF) {
        ++count;
    }

    printf("%ld\n", count);
}
