#include <stdio.h>

int main() {
    int month_number;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    char *month_names[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    if (month_number >= 1 && month_number <= 12) {
        printf("The month is: %s\n", month_names[month_number - 1]);
    } else {
        printf("Invalid month number!\n");
    }

    return 0;
}