/*Switch, case, break, default*/

#include <stdio.h>

int main() {
    int day_of_week = 1;

    day_of_week += 1;

    switch (day_of_week) {
        case 1:
            printf("Monday\n");
        break;
        case 2:
            printf("Tuesday\n");
        break;
        case 3:
            printf("Wednesday\n");
        break;
        case 4:
            printf("Thursday\n");
        break;
        case 5:
            printf("Friday\n");
        break;
        case 6:
            printf("Saturday\n");
        break;
        case 7:
            printf("Sunday\n");
        break;
        default:
            printf("Error\n");
    }

    int a = 1;

    a <<= 1;

    switch (a) {
        case 2:
            printf("two\n");
        break;
        case 4:
            printf("four\n");
        break;
        case 8:
            printf("eight\n");
        break;
        case 16:
            printf("sixteen\n");
        break;
        default:
            printf("Not a power of 2\n ");
    }


    switch (1) {
        case 1:
            printf("Hello ");
        case 2:
            printf("dear ");
        case 3:
            printf("World\n");
            break;
        default:
            printf("No case\n");
    }

    printf("Please, enter 'a' or 'A' and press Enter\n");

    switch (getchar()) {
        case 'a':
            printf("Lower register\n");
        break;
        case 'A':
            printf("Upper register\n");
        break;
        default:
            printf("Incorrect input\n");
    }

    int c = 1;

    switch (c) {
        case 1 ... 4:
            printf("1 - 4\n");
        break;
        default:
            printf("Incorrect input\n");
    }
        return 0;
}
