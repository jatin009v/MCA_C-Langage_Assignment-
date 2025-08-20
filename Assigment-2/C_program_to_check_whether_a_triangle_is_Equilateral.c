//3. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");

    return 0;
}


//output
//Enter three sides of triangle: 5 5 8
//Isosceles Triangle
