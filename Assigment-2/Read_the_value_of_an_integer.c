//1. Write a C program to read the value of an integer m and display the value of n is 1 
//when m is larger than 0, 0 when m is 0 and -1 when m is less than0.


#include <stdio.h>

int main() {
    int m, n;

    printf("Enter value of m: ");
    scanf("%d", &m);

    if (m > 0)
        n = 1;
    else if (m == 0)
        n = 0;
    else
        n = -1;

    printf("Value of n: %d\n", n);

    return 0;
}


//output
//Enter value of m: -5
//Value of n: -1
