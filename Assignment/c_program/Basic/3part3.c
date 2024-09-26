#include <stdio.h>

int main() {
    int numbers[10];
    int even_count = 0, odd_count = 0;
    int even_sum = 0, odd_sum = 0;

    
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }


    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
            even_sum += numbers[i];
        } else {
            odd_count++;
            odd_sum += numbers[i];
        }
    }


    printf("a. Number of even numbers: %d\n", even_count);
    printf("b. Number of odd numbers: %d\n", odd_count);
    printf("c. Sum of even numbers: %d\n", even_sum);
    printf("d. Sum of odd numbers: %d\n", odd_sum);

    return 0;
}