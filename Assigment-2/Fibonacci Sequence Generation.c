//11. Fibonacci Sequence Generation Using a While Loop.
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
        i++;
    }

    printf("\n");
    return 0;
}

//output
//Enter number of terms: 7
//0 1 1 2 3 5 8
