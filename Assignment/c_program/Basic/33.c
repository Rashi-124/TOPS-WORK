#include <stdio.h>

int main() {
    int num, power1, power2, power3;

    printf("Enter an integer: ");
    scanf("%d", &num);

    power1 = num; 
    power2 = num * num; 
    power3 = num * num * num;

    printf("The first three powers of %d are:\n", num);
    printf("%d^1 = %d\n", num, power1);
    printf("%d^2 = %d\n", num, power2);
    printf("%d^3 = %d\n", num, power3);

    return 0;
}
#include<stdio.h>

int main(){

    int num,power1,power2,power3;

    printf("enter an integer");
    scanf("%d",&num);

    power1=num;
    power2=num*num;
    power3=num*num*num;

    printf("the first three powers of %d are:\n",num);
    printf("%d^1=%d\n",num,power1);
    printf("%d^2=%d\n",num ,power2);
    printf("%d^3+%d\n",num,power3);
    return 0;
    
    }