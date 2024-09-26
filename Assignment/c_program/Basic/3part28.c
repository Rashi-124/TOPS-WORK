#include<stdio.h>
int main(){
    int n1=1,n2=2,i,n;
    printf("enter number:");
    scanf("%d",&n);
    printf("%d %d",n1,n2);
    for(i=3;i<=n,i++){
        if(i%2!=0){
            n1=n1*3;
            printf("%d",n1);
        }
        else{
            n2=n2*3;
            printf("%d",n2);
        }
    }

}