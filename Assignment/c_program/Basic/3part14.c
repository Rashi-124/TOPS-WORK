#include <stdio.h>

int main() {
    int num[5], i, j, factorial;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++) {
        factorial = 1;
        for (j = 1; j <= num[i]; j++) {
            factorial *= j;
        }
        printf("Factorial of %d = %d\n", num[i], factorial);
    }

    return 0;
}