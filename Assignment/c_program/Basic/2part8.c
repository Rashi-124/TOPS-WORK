#include <stdio.h>

int main() {
    int height; 

    printf("Enter the height of the person in centimeters: ");
    scanf("%d", &height);

    if (height < 150) {
        printf("The person is considered short.\n");
    } else if (height >= 150 && height < 165) {
        printf("The person is considered average height.\n");
    } else if (height >= 165 && height < 180) {
        printf("The person is considered tall.\n");
    } else {
        printf("The person is considered very tall.\n");
    }

    return 0;
}