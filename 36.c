#include<stdio.h>
int main ()
{
int n,i;
printf("enter the value of n\n");
scanf("%d",&n);
for(i = 1 ; i <= n; i++)
{
if(i % 2 != 0)
{
printf("%d\n",i);
i++;
}
}
return 0;
}