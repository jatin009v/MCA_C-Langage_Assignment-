//7. Write a program in C which is a Menu-Driven Program to perform a simple calculation.

#include <stdio.h>

int main() {
    int choice;
    float a, b;

    do {
        printf("\n--- Simple Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {
            case 1: printf("Result: %.2f\n", a + b); break;
            case 2: printf("Result: %.2f\n", a - b); break;
            case 3: printf("Result: %.2f\n", a * b); break;
            case 4:
                if (b != 0)
                    printf("Result: %.2f\n", a / b);
                else
                    printf("Error: Division by zero\n");
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}

//output
//--- Simple Calculator ---
///1. Addition
//2. Subtraction
//3. Multiplication
//4. Division
//5. Exit
///Enter your choice: 1
//Enter two numbers: 5 3
//Result: 8.00
