#include <stdio.h>

int main() {
    float salary, premium;

    printf("Enter the person's salary: ");
    scanf("%f", &salary);

    if (salary <= 20000) {
        premium = salary * 0.05; 
    } else if (salary <= 50000) {
        premium = 20000 * 0.05 + (salary - 20000) * 0.07; 
    } else {
        premium = 20000 * 0.05 + 30000 * 0.07 + (salary - 50000) * 0.10; 
    }

    printf("The person's insurance premium is: %.2f\n", premium);

    return 0;
}