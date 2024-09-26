#include <stdio.h>

int main() {
    int N, i;

    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Multiplication table of of %d:\n", N);

    i = 1;
    while (i <= 10) {
        printf("%d * %d = %d\n", N, i, N * i);
        i++;
    }

    return 0;
}