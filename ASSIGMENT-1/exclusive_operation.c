#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int result = a ^ b;
    printf("XOR result: %d\n", result);
    return 0;
}
