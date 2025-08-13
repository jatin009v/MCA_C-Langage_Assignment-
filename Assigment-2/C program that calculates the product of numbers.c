//8. Write a C program that calculates the product of numbers from 1 to 5 using a while loop.

#include <stdio.h>

int main() {
    int i = 1;
    long product = 1;

    while (i <= 5) {
        product *= i;
        i++;
    }

    printf("Product of numbers from 1 to 5: %ld\n", product);
    return 0;
}


//Output:
//Product of numbers from 1 to 5: 120
