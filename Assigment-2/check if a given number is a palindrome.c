//10. Write a C program that implements a program to check if a given

// number is a palindrome using a while loop.

#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("Palindrome number.\n");
    else
        printf("Not a palindrome number.\n");

    return 0;
}


//output
//Enter a number: 121
//Palindrome number.
