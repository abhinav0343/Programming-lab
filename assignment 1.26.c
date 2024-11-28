#include<stdio.h>//program to find sum of odd and even numbers between 1 and N
int main(){
int N,a=0,b=0,i;//a is sum of odd numbers and b is sum of even numbers

    printf("enter a number:");

    scanf("%d",&N);

    printf("sum of all even numbers between 1 and N is:");

for(i=2;i<N;i++){

    if(i%2==1)

    continue;

    a=a+i;

}

    printf("%d \n",a);

    printf("sum of all odd numbers between 1 and N is:");

for(i=2;i<N;i++){

    if(i%2==0)

    continue;

    b=b+i;

}

    printf("%d \n",b);

return 0;

}
