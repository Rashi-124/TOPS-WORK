#include<stdio.h>
int main(){
    float num,sum=0;
    printf("enter number:");
    scanf("%f",&num);
    for(int i=1;i<=num ;i++){
        if(i%2!=0){
            sum+=(float)i/(i+i);
            printf("%d/%d-",i,i+1);
        }
        else{
            sum=(float)i/(i+i);
            printf("%d/%d +",i,i+1);
        }
    }
    printf("=%d.2f",sum);
}