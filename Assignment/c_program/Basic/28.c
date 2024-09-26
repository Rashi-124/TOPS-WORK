#include <stdio.h>

int main() {
    int years, days, months, remaining_days;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    days = years * 365;
    months = days / 30;
    remaining_days = days % 30;

    printf("%d years is equal to %d months and %d days.\n", years, months, remaining_days);

    return 0;
}  