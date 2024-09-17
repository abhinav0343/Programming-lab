#include<stdio.h>
int main()
{
int n,r,sum=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r = n%10;
sum = sum+r;
n = n/10;
}
n=sum;
sum = 0;
while(n!=0)
{
r = n%10;
sum = sum + r;
n = n/10;
}
n=sum;
sum = 0;
while(n!=0)
{
r = n%10;
sum = sum+r;
n = n/10;
}
n=sum;
printf("sum=%d",n);
return 0;
}