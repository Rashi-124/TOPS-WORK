#include <stdio.h>

int main() {
    float monthly_salary, insurance_premium, loan_installment, remaining_salary;

    printf("Enter your monthly salary: ");
    scanf("%f", &monthly_salary);

    insurance_premium = monthly_salary * 0.10;

   
    loan_installment = monthly_salary * 0.10;

    
    float total_deductions = insurance_premium + loan_installment;

    
    remaining_salary = monthly_salary - total_deductions;

    printf("Monthly Salary: %.2f\n", monthly_salary);
    printf("Insurance Premium (10%): %.2f\n", insurance_premium);
    printf("Loan Installment (10%): %.2f\n", loan_installment);
    printf("Total Deductions: %.2f\n", total_deductions);
    printf("Remaining Salary: %.2f\n", remaining_salary);

    return 0;
}