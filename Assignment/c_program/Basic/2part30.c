#include <stdio.h>

int main() {
    float bill_amount, surcharge, total_bill;

    printf("Enter the bill amount: ");
    scanf("%f", &bill_amount);

    if (bill_amount > 800) {
        surcharge = (bill_amount - 800) * 0.18;
        total_bill = bill_amount + surcharge;
    } else {
        total_bill = bill_amount;
    }

    if (total_bill < 256) {
        total_bill = 256;
    }

    printf("Total bill amount: Rs. %.2f\n", total_bill);

    return 0;
}