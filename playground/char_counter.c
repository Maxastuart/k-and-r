#include <stdio.h>

int main(void)
{
    int c, i, space_chars, other_chars;
    int digit_count[10];

    space_chars = other_chars = 0;

    // initialize all 10 digits to 0;
    for (i = 0; i < 10; i++) {
        digit_count[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            digit_count[c-'0']++;   // ascii math
        } else if (c == ' ' || c == '\n' || c == '\t') {
            space_chars++;
        } else {
            other_chars++;
        }
    }

    printf("digits =");

    for (i = 0; i <= 9; i++) {
        printf(" %d", i);
    }
    printf("\n");

    printf("        ");
    for (i = 1; i <= 10; i++) {
        printf(" -");
    }
    printf("\n");

    printf("        ");
    for (i = 0; i < 10; i++) {
        printf(" %d", digit_count[i]);
    }
    
    printf("\n");
    printf("\nwhite space = %d, other = %d\n", space_chars, other_chars);
}
