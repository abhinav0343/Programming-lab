
#include <stdio.h>
int main () {
int n,flag=0,i;
printf("enter a positive number\n");
scanf("%d",&n);
if(n<=1)
{
printf("enetered number is not prime number %d\n",n);
}
for(i=2;i<=n/2;++i)
{
if (n % i == 0)
{
flag = 1;
break ;
}
}
if (flag==0)
{
printf("number is prime number %d\n",n);
}
else
{
printf("not a prime number %d\n",n);
}
return 0;
}