#include <stdio.h>
#include <math.h>

/* create a struct, point, with x and y "members" */
struct point {
    int x;
    int y;
};

/* make a new struct, rect, that has point structs inside of it */
struct rect {
    struct point pt1;
    struct point pt2;
};

int main(void)
{
    /* initializing a point struct with x and y values */
    struct point pt = { 320, 200 };
    printf("x = %d\ny = %d\n", pt.x, pt.y);

    /* declaring a double variable, dist, and sqrt() that returns a double */
    double dist, sqrt(double);

    /* using sqrt() requires -lm to be added to the gcc compiler command 
       in order to build the executable. -lm links the math.h header
       with the code */

    /* Pathag theorum, a^2 + b^ = c^2 */
    dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
    printf("dist = %f\n", dist);

    /* declare "screen", a rect struct */
    struct rect screen;

    /* initialize the x-coordinate value of pt1 in screen */
    screen.pt1.x = 420;
    printf("screen.pt1.x = %d\n", screen.pt1.x);

    return 0;
}

