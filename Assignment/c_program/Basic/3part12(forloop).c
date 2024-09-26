#include <stdio.h> 
#include <math.h> 

int main() {
    int num, temp, originalNum, remainder, sum = 0, n = 0;

    printf("Input a number: "); 
    scanf("%d", &num);

    originalNum = num;

    
    for (temp = num; temp != 0; n++) { 
        temp /= 10;
    }

    
    for (temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        sum += pow(remainder, n);
    }


    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}