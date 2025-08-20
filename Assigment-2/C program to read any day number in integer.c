//6. Write a C program to read any day number in integer and display the day name in word format.

//Write a program in C to read any Month Number in integer and display the number of days for this month.

#include <stdio.h>

int main() {
    int day, month;

    // Day name
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid day\n");
    }

    // Month days
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n"); break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n"); break;
        case 2:
            printf("28 or 29 days\n"); break;
        default:
            printf("Invalid month\n");
    }

    return 0;
}


//output
//Enter day number (1-7): 5
//Thursday
//Enter month number (1-12): 2
//28 or 29 days
