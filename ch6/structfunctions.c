#include <stdio.h>
#define XMAX    100
#define YMAX    300

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

struct point makepoint(int x, int y);

int main(void)
{
    /* declare a rect struct, screen */
    struct rect screen;

    /* declare a middle point, and the makepoint function */
    struct point middle;
    struct point makepoint(int, int);

    /* initialze values */
    screen.pt1 = makepoint(0, 0);
    screen.pt2 = makepoint(XMAX, YMAX);
    middle = makepoint((screen.pt1.x + screen.pt2.x) / 2,
                       (screen.pt1.y + screen.pt2.y) / 2);
    printf("screen coordinates: (%d, %d) (%d, %d)", screen.pt1.x, screen.pt1.y,
                                                   screen.pt2.x, screen.pt2.y);

}

/* makepoint: make a point struct from x and y componentes */
struct point makepoint(int x, int y)
{
    /* intialize a temp point struct that will be returned */
    struct point temp;

    /* variable names can be the same as member names, but may be confusing */
    temp.x = x;
    temp.y = y;

    return temp;
    /* this function can be used to initialize any point structure dynamically
       or to provide structure arguments to a function */
}
