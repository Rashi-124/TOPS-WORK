#include <stdio.h>

int main() {
    int num, i=1, even_count= 0, odd_count= 0;
    
    printf("Enter 5 numbers:\n");
    while (i <= 5) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            even_count ++;
        } else {
            odd_count ++;
        }


        i++;
    }

    printf(" even numbers: %d\n", even_count);
    printf(" odd numbers: %d\n", odd_count);

    return 0;
}
