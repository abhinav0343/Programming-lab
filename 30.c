#include<stdio.h>
int main ()
{
int num,rem,q,count=0,cnt,sum=0,n;
printf("number");
scanf("%d",&num);
n=num;
while(n!=0)
{
rem=n%10;
sum=(sum*10)+rem;
n=n/10;
}
printf("reverse=%d",sum);
}
