//12. Write a C program that prompts the user to enter a positive integer. 
//Use a while loop to print the multiplication table for that number up to 10.

#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}

//Enter a positive integer: 5
//5 x 1 = 5
//5 x 2 = 10
//5 x 3 = 15
//...
//5 x 10 = 50
