#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, sum = 0, n = 0, temp;

    printf("Input a number: ");
    scanf("%d", &num);

    originalNum = num;

    temp = num;

    // Calculate the number of digits in the input number
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    // Calculate the sum of the nth powers of each digit
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}