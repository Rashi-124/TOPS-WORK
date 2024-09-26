#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    if (sum > 9) {
        int temp = sum;
        sum = 0;
        while (temp != 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
    }

    if (sum > 9) {
        printf("Sum of digits is: %d\n", sum);
    } else {
        printf("Sum of digits is: %d\n", sum > 9 ? -(10 - sum) : sum);
    }

    return 0;
}