#include <stdio.h>

#define MAX_EXPENSES 5

int main() {
    float expenses[MAX_EXPENSES];
    float totalExpenses = 0.0;

    for (int i = 0; i < MAX_EXPENSES; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        totalExpenses += expenses[i];
    }

    float averageExpenses = totalExpenses / MAX_EXPENSES;

    printf("\nExpenses:\n");
    for (int i = 0; i < MAX_EXPENSES; i++) {
        printf("Expense %d: %.2f\n", i + 1, expenses[i]);
    }

    printf("\nTotal expenses: %.2f\n", totalExpenses);
    printf("Average expenses: %.2f\n", averageExpenses);

    return 0;
}