#include <stdio.h>

int main() {
    float basic_salary, hra, da, gross_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000) {
        hra = basic_salary * 0.20;
        da = basic_salary * 0.80;
    } else if (basic_salary <= 20000) {
        hra = basic_salary * 0.25;
        da = basic_salary * 0.90;
    } else {
        hra = basic_salary * 0.30;
        da = basic_salary * 0.95;
    }

    gross_salary = basic_salary + hra + da;

    printf("Gross salary: Rs. %.2f\n", gross_salary);

    return 0;
}