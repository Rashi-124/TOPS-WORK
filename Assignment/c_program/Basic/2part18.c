#include <stdio.h>

int main() {
    float selling_price, cost_price, profit, loss;

    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    printf("Enter the cost price: ");
    scanf("%f", &cost_price);

    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        printf("You made a profit of Rs. %.2f\n", profit);
    } else if (selling_price < cost_price) {
        loss = cost_price - selling_price;
        printf("You made a loss of Rs. %.2f\n", loss);
    } else {
        printf("No profit or loss.\n");
    }

    return 0;
}