#include<stdio.h>//program to swap two variables without using third variable
int main(){
int a,b;

    printf("enter a:");

    scanf("%d",&a);

    printf("enter b:");

    scanf("%d",&b);

    a=a+b;

    b=a-b;

    a=a-b;

    printf("after swapping value of a and b is %d %d",a,b);

return 0;

}










