#include<stdio.h>
int main()
{
int a=0,b=1,c,i;
printf("%d\n",a);
printf("%d\n",b);
for(i=1;i<=20;i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
return 0;
}