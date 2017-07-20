#include <stdio.h>

// copy input to output v.2

main()
{
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}

/*
In C, any assignment, such as c = getchar(), is an expression and has a value,
which is the value of the left hand side after the assignment. This means that
an assignment can appear as part of a larger expression. So you can put the
assignment of a character to c inside the test part of a while loop. Like above.
*/

// here is another example of an assignment as part of the test in a while loop:
main()
{
  int x;
  while ((x = x + 20) < 100) {
    printf("x = %d\n", x);
  }
}

// Exercise 1-6
// Verify that the expression getchar() != EOF is 0 or 1.
main()
{
  printf("getchar() != EOF is %d\n", getchar() != EOF);
  // output:
  // $ ./file-copying-2
  // hello
  // getchar() != EOF is 1

}
