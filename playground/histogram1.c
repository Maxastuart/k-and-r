/* prints a histogram of the lengths of words in its input */

#include <stdio.h>

#define IN  1
#define OUT 0
#define MAX 30  // max word length

int main(void)
{
    /* To-do:
       determine length of each word
       create a histogram (array)
       initialize it to 0
       print it out
    */

    int c, len, state;
    int word_length[MAX];

    // initialize word_length array to 0
    for (int i = 0; i < MAX; i++) {
        word_length[i] = 0;
    }

    state = IN;

    while ((c = getchar()) != EOF) {

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            state = IN;
            len++;
        }

        if (c == ' ' || c == '\t' || c =='\n') {
            state = OUT;
            word_length[len]++;
            len = 0;
        }
    }

    putchar('\n');
    printf("word lengths: \n---------------\n");
    for (int i = 0; i < MAX; i++) {
        if (word_length[i] > 0) {
            printf("length of %d: %d\n", i, word_length[i]);
        }
    }
}
