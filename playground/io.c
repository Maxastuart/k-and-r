#include <stdio.h>

int main(void)
{
    char a, b, c;
    int d;
    printf("Enter a char: ");
    a = getchar();
    b = getchar();
    c = getchar();
    d = getchar();

    putchar(a);
    putchar('\n');
    printf("You entered: %c, %c, %c, %d\n", a, b, c, d);

    return 0;
}
