#include <stdio.h>

int main() {
    int num, sum = 0, i = 1;

    printf("Enter 10 numbers:\n");

    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
        i++;
    }

    printf("Sum of the 10 numbers = %d\n", sum);

    return 0;
}