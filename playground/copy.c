#include <stdio.h> // EOF is an int stored in stdio

int main(void)
{
    // read a character
    int c = getchar(); // int, not char, it needs to be big enough to hold EOF

    // loop (creates the text stream)
    while (c != EOF) {
        // output the character just read
        putchar(c);
        // read a character
        c = getchar();
    }
}

/*
   Text I/O is dealt with as STREAMS of characters.
   A TEXT STREAM is a sequence of characters divided into LINES; each
   line consists of zero or more characters followed by a \n.
*/
