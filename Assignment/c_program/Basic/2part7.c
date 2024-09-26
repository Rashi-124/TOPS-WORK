#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("You have passed with %d marks!\n", marks);
    } else {
        printf("You have failed with %d marks.\n", marks);
    }

    return 0;
}