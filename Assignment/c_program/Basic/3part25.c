#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("Enter the number where the end series");
    scanf("%d",&num);
    printf("(1*1)");
    for (i=2,i<=num;i++){
        if(i!=num){
            printf("+%d",i);
        }
        else{
            printf("+%d",i);
        }
        sum=sum+i;
    }
    printf("=%d",sum+1);
}