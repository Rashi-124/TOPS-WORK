#include <stdio.h>

int main() {
    float hourly_rate, hours_per_week, weeks_per_year;

    printf("Enter the person's hourly rate: ");
    scanf("%f", &hourly_rate);

    printf("Enter the number of hours the person works per week: ");
    scanf("%f", &hours_per_week);

    printf("Enter the number of weeks the person works per year: ");
    scanf("%f", &weeks_per_year);

    float annual_salary = hourly_rate * hours_per_week * weeks_per_year;

    printf("The person's annual salary is: %.2f\n", annual_salary);

    return 0;
}