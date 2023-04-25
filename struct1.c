#include <stdio.h>
#include <stdlib.h>

struct Point{ //defining a struct for a point in 2D

    int x; // x-coordinate
    int y; // y- coordinate
};

int main()
{

    struct Point p1 = {2,3}; //declaring and initializing a point variable

    printf("The x-coordinate of p1 is %d\n", p1.x);
    printf("The y-coordinate of p1 is %d\n", p1.y);

    p1.x = 4; // Modifying the x and y coordinates
    p1.y = 7;

    printf("The new coordinates of p1 are (%d, %d)", p1.x, p1.y);


    return 0;
}
