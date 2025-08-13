// 9. Write a C program that prompts the user to input a series of numbers until

//they input a duplicate number. Use a while loop to check for duplicates.

#include <stdio.h>

int main() {
    int numbers[100], count = 0, num, i, duplicate = 0;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        duplicate = 0;

        for (i = 0; i < count; i++) {
            if (numbers[i] == num) {
                duplicate = 1;
                break;
            }
        }

        if (duplicate) {
            printf("Duplicate number entered! Program ends.\n");
            break;
        }

        numbers[count++] = num;
    }

    return 0;
}


//output:
//Enter a number: 5
//Enter a number: 2
//Enter a number: 7
//Enter a number: 2
//Duplicate number entered! Program ends.
