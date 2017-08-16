/* getint: performs free-format input conversion by breaking a stream of
   characters into integer values, one integer per call. Returns the value it
   found and also signals end of file when there is no more input. */

#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int n, array[SIZE], getint(int *);

int main(void)
{

}

int getint(int *x)
{
    int c, sign;

    while (isspace(c = getch())) {
        ;
    } 
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);     // its not a number
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c =='-') {
        c = getch();
    }
    for (*x = 0; isdigit(c); c = getch()) {
        *x = 10 * *x + (c - '0');
    }
    *x *= sign;
    if (c != EOF) {
        ungetch(c);
    }
    return c;
}
