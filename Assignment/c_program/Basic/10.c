#include <stdio.h>

int main() {
    float width, height, length, area;

  
    printf("Enter the width of the prism: ");
    scanf("%f", &width);

    printf("Enter the height of the prism: ");
    scanf("%f", &height);

    printf("Enter the length of the prism: ");
    scanf("%f", &length);


    area = 2 * (width * length + height * length + height * width);

    
    printf("The area of the rectangular prism is: %.2f\n", area);

    return 0;
}