//4. 4. Write a C program to check whether a character is an alphabet, digit or
// special character.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch))
        printf("Alphabet\n");
    else if (isdigit(ch))
        printf("Digit\n");
    else
        printf("Special Character\n");

    return 0;
}


//output
//Enter a character: @
//Special Character
