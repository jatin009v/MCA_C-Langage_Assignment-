#include <stdio.h>

int main() {
    int start, end, units;
    float bill;

    printf("Enter starting and ending meter reading: ");
    scanf("%d %d", &start, &end);

    units = end - start;

    if (units > 200 && units <= 500)
        bill = units * 7.5;
    else if (units > 100 && units <= 200)
        bill = units * 5.5;
    else
        bill = units * 2.5;

    printf("Total units consumed: %d\n", units);
    printf("Energy Bill: Rs. %.2f\n", bill);

    return 0;
}
