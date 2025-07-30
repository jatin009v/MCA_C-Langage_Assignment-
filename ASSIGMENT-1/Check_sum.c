#include <stdio.h>

int main() {
    int a, b, c, sum;
    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    if (sum >= 100 && sum <= 200)
        printf("Sum is in the range 100 to 200\n");
    else
        printf("Sum is not in the range 100 to 200\n");

    return 0;
}
