#include <stdio.h>

int main(void)
{
    int a, b, c, min;

    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    min = (a < b) ? (a < c) ? a : c : (b < c) ? b : c;

    printf("The minimum of the three is: %d", min);

    return 0;
}