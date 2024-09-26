#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the side of the cube: ");
    scanf("%f", &side);

    area = 6 * side * side;

    printf("Surface area of the cube: %.2f\n", area);

    return 0;
}