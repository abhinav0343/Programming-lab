#include<stdio.h>//program to find power without using math header file
int main(){
int a,b,result=1,i;//a is base and b is power

    printf("enter two numbers:");

    scanf("%d %d",&a,&b);

for(i=1;i<=b;i++){

    result=result*a;

}

    printf("a to the power of b is %d",result);

return 0;

}
