#include <stdio.h>

int main() {
    int num_students, total_apples;

    /* Ask user for input */
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    /* Calculate the total number of apples required */
    total_apples = num_students * 5;

    /* Print the result */
    printf("Total apples required: %d\n", total_apples);

    return 0;
}