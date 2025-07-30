#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    if (scanf("%c", &ch))
        printf("0\n");
    else
        printf("1\n");
    return 0;
}


