#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    
    float amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("The compound interest is: %.2f\n", compound_interest);

    return 0;
}