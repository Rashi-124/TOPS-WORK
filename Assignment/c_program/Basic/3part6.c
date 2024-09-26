#include <stdio.h>

int main() {
    int num;
    int t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonacci series up to %d is: ", num);
    printf("%d, %d, ", t1, t2);

    while (nextTerm <= num) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ", nextTerm);
    }

    printf("\n");

    return 0;
}