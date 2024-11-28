#include<stdio.h>//program to swap two variables using third variable
int main(){
int a,b,c;

    printf("enter a:");

    scanf("%d",&a);

    printf("enter b:");

    scanf("%d",&b);

    c=a;

    a=b;

    b=c;

    printf("after swapping a and b is %d %d",a,b);

return 0;

}
