#include <stdio.h>

/* Incorrect version, which doesn't change the variables in 
   the function that called it (main).

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

   Correct version, using pointers:  */

void swap(int *a, int *b)   // args are now pointers to addresses of ints
{
    int temp;   // temp var to hold a for a moment
    temp = *a;  // assign the pointer value of 'a' to temp
    *a = *b;    // assign the pointer value of b to the pointer value of a 
    *b = temp;  // assign temp (*a) to the pointer value of b
}

int main(void)
{
    int x = 5;
    int y = 50;

    printf("Before swap...\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // swap(x, y); broken. we now need to pass addresses, not ints.
    swap(&x, &y);   // & operator refers to memory address of x and y.

    printf("After swap...\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
