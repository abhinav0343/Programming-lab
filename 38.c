#include<stdio.h>
#include<math.h>
int main ()
{
int n,i;
printf("enter the value of n\n");
scanf("%d",&n);
for(i = 1 ; i*i <= n; i++)
{
printf("%d\n",i*i);
}
return 0;
}