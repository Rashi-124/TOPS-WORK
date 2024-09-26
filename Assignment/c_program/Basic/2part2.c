

#include<stdio.h>

int main(){
    int m,n;


printf("enter an integer:");
scanf("%d",&m);


if (m > 0) {
    n =1;
}
else if(m==0){
    n=0;
}
else{
    n=-1;
}

printf("the value of n is:%d\n",n);

return 0;

}

