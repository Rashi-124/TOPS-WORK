#include <stdio.h>

int main() {
    int customer_id;
    char customer_name[50];
    float units_consumed, total_amount;

    printf("Enter customer ID: ");
    scanf("%d", &customer_id); 

    printf("Enter customer name: ");
    scanf("%s", customer_name);  
    
    printf("Enter units consumed: ");    
    scanf("%f", &units_consumed);

    if (units_consumed <= 200) {
        total_amount = units_consumed * 1.20;
    } else if (units_consumed <= 350) {
        total_amount = 200 * 1.20 + (units_consumed - 200) * 1.50;
    } else if (units_consumed <= 600) {
        total_amount = 200 * 1.20 + 150 * 1.50 + (units_consumed - 350) * 1.80;
    } else if (units_consumed <= 800) {
        total_amount = 200 * 1.20 + 150 * 1.50 + 250 * 1.80 + (units_consumed - 600) * 2.00;
    } else {
        total_amount = 200 * 1.20 + 150 * 1.50 + 250 * 1.80 + 200 * 2.00 + (units_consumed - 800) * 2.00;
    }

    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %.2f\n", units_consumed);
    printf("Total Amount: Rs. %.2f\n", total_amount);

    return 0;
}