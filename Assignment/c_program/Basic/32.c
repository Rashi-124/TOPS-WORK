#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    if (sizeof(sum) == 2) {
        printf("The size of the sum is 2 bytes (short int).\n");
    } else if (sizeof(sum) == 4) {
        printf("The size of the sum is 4 bytes (int).\n");
    } else if (sizeof(sum) == 8) {
        printf("The size of the sum is 8 bytes (long int).\n");
    } else {
        printf("The size of the sum is unknown.\n");
    }

    return 0;
}
