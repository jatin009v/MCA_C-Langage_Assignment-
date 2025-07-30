#include <stdio.h>

int main() {
    int a, b, c, sum, mul;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (1) {
        sum = a + b + c;
        mul = a * b * c;
        printf("Sum = %d\n", sum);
        printf("Multiplication = %d\n", mul);
    }

    return 0;
}
