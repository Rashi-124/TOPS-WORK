#include <stdio.h>

int main() {
    int ascii_val;
    printf("Enter an ASCII value: ");
    scanf("%d", &ascii_val);

    char c = ascii_val;
    printf("The ASCII character for %d is %c\n", ascii_val, c);

    return 0;
}