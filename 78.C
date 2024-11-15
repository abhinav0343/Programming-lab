#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int armstrong(int n);
int main()
{
    printf("enter the number\n");
    int n;
    scanf("%d",&n);
    armstrong(n);
}
int armstrong(int num)
{
int count,sum,result,i,q,rem;
sum=0,count=0;
q=num;
while(q!=0)
{
    q=q/10;
    count++;
}
q=num;
int cnt=count;
while(num!=0)
{
   int mul=1;
   rem = num%10;
   num=num/10;
   while(cnt!=0)
   {
     mul=mul*rem;
     cnt--;
   }
   sum=sum+mul;
   cnt=count;
}
if(sum==q)
{
    printf("ARMSTRONG\n");
}
else
{
    printf("NOT ARMSTRONG\n");
}
}