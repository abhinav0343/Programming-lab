#include<stdio.h>
int main(){
float a,b;

    printf("enter two numbers:");

    scanf("%f %f",&a,&b);

char op;

    printf("enter an arthimatic operator(+,-,*,/):");

    scanf(" %c",&op);

float sum=a+b;

float sub=a-b;

float mul=a*b;

float div=a/b;

switch(op){

case '+' :printf("sum is %f",sum);

break;

case '-':printf("sub is %f",sub);

break;

case '*' :printf("mul is %f",mul);

break;

case '/' :printf("div is %f",div);

break;

default:printf("not a simple operation");

}

return 0;

}
