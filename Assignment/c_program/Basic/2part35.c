#include <stdio.h>

int main() {
    int month_number;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    int days_in_month;

    switch (month_number) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days_in_month = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days_in_month = 30;
            break;
        case 2:
            printf("Enter the year: ");
            int year;
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                days_in_month = 29;
            } else {
                days_in_month = 28;
            }
            break;
        default:
            printf("Invalid month number!\n");
            return 1;
    }

    printf("The month %d has %d days.\n", month_number, days_in_month);

    return 0;
}