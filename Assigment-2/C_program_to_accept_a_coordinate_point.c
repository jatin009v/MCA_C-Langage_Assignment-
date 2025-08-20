//2. Write a C program to accept a coordinate point in an XY coordinate system
//and determine in which quadrant the coordinate point lies.

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter X coordinate: ");
    scanf("%d", &x);
    printf("Enter Y coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("Point lies in Quadrant 1\n");
    else if (x < 0 && y > 0)
        printf("Point lies in Quadrant 2\n");
    else if (x < 0 && y < 0)
        printf("Point lies in Quadrant 3\n");
    else if (x > 0 && y < 0)
        printf("Point lies in Quadrant 4\n");
    else if (x == 0 && y == 0)
        printf("Point is at the Origin\n");
    else if (x == 0)
        printf("Point lies on Y-axis\n");
    else
        printf("Point lies on X-axis\n");

    return 0;
}


//output
//Enter X coordinate: -4
//Enter Y coordinate: 7
//Point lies in Quadrant 2
