#include <stdio.h>

int main(void)
{
    int a, b, c, max;

    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    printf("The largest of the three is: %d", max);

    return 0;
}